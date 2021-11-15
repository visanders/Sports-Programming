// My solution of https://www.eolymp.com/en/problems/6123

#include <iostream>
#include <cmath>
#define ll long long 
#include <stack>
#include <iomanip>
#include <string>

using namespace std;

class Stack {
public: 
    stack <int> a;
    void Pop(){
        if (a.empty()){
            cout<<"error"<<endl;
        } 
        else {
            cout<<a.top()<<endl;
            a.pop();
        }
    }
    void Push(int n){
        a.push(n);
        cout<<"ok"<<endl;
    }
    void Back(){
        if (a.empty()){
            cout<<"error"<<endl;
        } 
        else {
            cout<<a.top()<<endl;
        }
    }
    void Size(){
        cout<<a.size()<<endl;
    }
    void Clear(){
        while(!a.empty()){
            a.pop();
        }
        cout<<"ok"<<endl;
    }
    void Exit(){
        cout<<"bye"<<endl;
    }
};

int main()
{
    string comm;
    int dig;
    Stack mystack;
    while (cin>>comm){
        if (comm=="push"){
            cin>>dig;
            mystack.Push(dig);
        }
        else if (comm=="pop"){
            mystack.Pop();
        }
        else if (comm=="back"){
            mystack.Back();
        }
        else if (comm=="size"){
            mystack.Size();
        }
        else if (comm=="clear"){
            mystack.Clear();
        }
        else if (comm=="exit"){
            mystack.Exit();
            return 0;
        }}}
