#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("ayush");
    q.push("kumar");
    q.push("Badaya"); // isme jo phle gya hai vo print hoga

    cout<<q.front() <<endl;
      cout<<q.size() <<endl;

    q.pop();
    cout<<q.front() <<endl;
    cout<<q.size() <<endl;

     q.pop();
    cout<<q.front() <<endl;
      cout<<q.size() <<endl;
}