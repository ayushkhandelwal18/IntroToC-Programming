#include<iostream>
#include<stack>
using namespace std;

int main(){
  stack<string> s;

  s.push("ayush");
  s.push("kumar");
  s.push("badaya"); //sabse last me dala h mtlb sabse upper h abhi to

  cout<<s.top() <<endl;

  s.pop();
     cout<<s.top() <<endl;

     cout<<"Size of stack:" <<s.size();


     cout<<s.empty();

}
