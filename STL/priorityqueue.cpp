#include<iostream>
#include<queue>
using namespace std;
 int main(){
    priority_queue<int>  maxi ; //this is max heap

    priority_queue<int,vector<int> ,greater<int> >mini; //this is mini heap

    maxi.push(1);
    maxi.push(0);
    maxi.push(2);
     maxi.push(3);

     int n=maxi.size();
     for(int i=0;i<n;i++){
        cout<<maxi.top() <<" ";
        maxi.pop();

     }
     cout<<endl;

     mini.push(1);
     mini.push(0);
     mini.push(2);
     mini.push(3);
     mini.push(5);

     int m=mini.size();
     for(int i=0;i<m;i++){
        cout<<mini.top() <<" ";
        mini.pop();

     }
     cout<<endl;

     cout<<maxi.empty() <<endl; // pop kra h to ab khali ayenge mtlb inka answer 1 yega
     cout<<mini.empty() <<endl;


    

    
 }