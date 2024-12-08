#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>d;
    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout<<i <<" ";
    }

   /* d.pop_front(); // or we can use also pop_back
    cout<<endl;
    for(int i:d){
        cout<<i <<" ";
    }*/
     cout<<endl;
    cout<<"first index element:" <<d.at(1) <<endl;

    
    cout<<d.front();

    cout<<endl;
    cout<<d.back();

    cout<<endl;
    cout<<"Empty :" <<d.empty() <<endl;

    cout<<"Size before erase:" <<d.size() <<endl;
    d.erase(d.begin(),d.begin()+1);
     cout<<"Size after erase:" <<d.size() <<endl;

for(int i:d){
        cout<<i <<" ";
    }



}