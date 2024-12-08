#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;

    m[1]="ayush";
    m[18]="start";
    m[2]="want";

    m.insert({20,"Startup"});

    cout<<"Before erase: " <<endl;

    for(auto i:m){
        cout<<i.first <<" " <<i.second <<endl;
}

cout<<"Finding " <<m.count(20) <<endl;

m.erase(13);

cout<<"After erase:" <<endl;

for(auto i:m){
     cout<<i.first <<" " <<i.second <<endl;
}




}