#include<iostream>
#include<array>


using namespace std;

int main(){
    // array<int,5> a = {11,22,33,44,55};
    array<int,5> a =  {11,22,33,44,55};
    int size = a.size();

    // using for loop 
    for(int i = 0; i < size; i++){
        cout<<a[i]<<endl;
    }

    // using for each loop
    for(int i : a){
        cout<<i<<" ";
    }
    
    cout<<"Element at index 2 : "<<a.at(1)<<endl;

    // cout<<"Element at index 5 : "<<a.at(5)<<endl; error :  std::out_of_range

    cout<<"empty or not : "<<a.empty()<<endl;
    cout<<"element at the fornt(1st element) : "<<a.front()<<endl;
    cout<<"element at the end (last element) : "<<a.back()<<endl;


    cout<<"fills the array with same value : "<<endl;
    a.fill(10);
    for(int i : a){
        cout<<i<<" ";
    }

    cout<<endl;

    cout<<"adress of start : "<<a.begin()<<endl;

    cout<<endl;
    cout<<"-------------------------"<<endl;

    array<int,5> a2  = {6,7,8,9,10};

    for(int i : a){
        cout<<i<<" ";
    }
    for(int i : a2){
        cout<<i<<" ";
    }
    a.swap(a2);
    cout<<endl;

     for(int i : a){
        cout<<i<<" ";
    }
    for(int i : a2){
        cout<<i<<" ";
    }
    return 0;
}