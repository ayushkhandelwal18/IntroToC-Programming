#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;
    s.insert(6);
     s.insert(6);
      s.insert(6);
       s.insert(8);
        s.insert(8);
         s.insert(8);
          s.insert(5);
           s.insert(5);
            s.insert(4);

            for(auto i:s){
                cout<<i <<endl;
            }
              cout<<endl;
            cout<<s.count(5);
            cout<<endl;
            cout<<s.count(10);
            cout<<endl;\
            cout<<endl;

            set<int>::iterator itr=s.find(5);

            for(auto it=itr;it!=s.end();it++){
                cout<<*it <<endl;

            }
}

