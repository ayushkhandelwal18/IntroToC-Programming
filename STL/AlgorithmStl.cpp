#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(8);
    v.push_back(10);
    v.push_back(16);
    v.push_back(20);

    cout<<" Finding 10 by applying binary search :" <<binary_search(v.begin(),v.end(),10);

    cout<<endl;
    cout<<" Upper bound  :" <<lower_bound(v.begin(),v.end(),10)-v.begin();
    cout<<" lower bound  :" <<upper_bound(v.begin(),v.end(),20)-v.begin();
          cout<<endl;
    int a=5,b=4;

    cout<<"MAx:" << max(a,b);
    cout<<endl;
    cout<<"Min:" << min(a,b);
     cout<<endl;
     swap(a,b);
     cout<<a <<" " <<b <<endl;

     string s="AYUSH";
     cout<<s;
     cout<<endl;
     reverse(s.begin(),s.end());
     cout<<s;
     cout<<endl;

     rotate(v.begin(),v.begin()+2,v.end());
     cout<<"After rotate:" <<endl;

     for(int i:v){
        cout<<i <<" " <<endl;
     }
      cout<<endl;
     
    sort(v.begin(),v.end());
    cout<<"After sort:" <<endl;

     for(int i:v){
        cout<<i <<" " <<endl;
     }
      cout<<endl;
}