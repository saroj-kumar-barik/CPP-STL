#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    // to know the no of elements the vector can store
    cout<<v.capacity()<<endl;
    // size() -the total no of elements present in the vector
    cout<<v.size()<<endl;
    // to add elements
    v.push_back(1);
    v.push_back(2);

    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    
    v.push_back(3);
    // v.push_back(1);

    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    int j = 0;
    for(int i : v){
        // j = 0;
        cout<<"element = "<<i<<" "<<endl;
        j++;
    }

    cout<<"element at index 2 : "<<v.at(2)<<endl;
    cout<<"element at index 0 : "<<v.at(0)<<endl;
    // cout<<"element at index 0 : "<<v.at(5)<<endl; out of range error
    cout<<"element at the beginning : "<<v.front()<<endl;
    cout<<"element at the end : "<<v.back()<<endl;

    // int j = 0;
    cout<<"before pop"<<endl;
    for(int i : v){
        // j = 0;
        cout<<"element = "<<i<<" "<<endl;
        j++;
    }
    cout<<"after pop"<<endl;

    v.pop_back();

    for(int i : v){
        // j = 0;
        cout<<"element = "<<i<<" "<<endl;
        j++;
    }
    cout<<"delete from first : "<<endl;
    v.erase(v.begin());

    for(int i : v){
        // j = 0;
        cout<<"element = "<<i<<" "<<endl;
        j++;
    }

    // to delete all the elements from the vector

    v.clear();

     for(int i : v){
        // j = 0;
        cout<<"element = "<<i<<" "<<endl;
        j++;
    }

    cout<<"vector cleared"<<endl;

    vector<int> v1;
// application :
    int e = 0;
    while(e < 20){
        if(e % 2 == 0){
            v1.push_back(e);
        }
        e++;
    }

    cout<<v1.capacity()<<" "<<v1.size()<<endl;

     for(int i : v1){
        // j = 0;
        cout<<"element = "<<i<<" "<<endl;
    }

}