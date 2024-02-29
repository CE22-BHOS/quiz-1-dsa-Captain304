#include <iostream>
#include <string>
#include <stack>

using namespace std;

stack<int> st1;
stack<int> st2;

void push(int x){
    st1.push(x);
    if(!st2.empty() && x>st2.top()){
        st2.push(st2.top());
    }
    else{
        st2.push(x);
    }
}
int pop(){
    int x;
    if(!st1.empty()){
        x=st1.top();
        st1.pop();
        st2.pop();
        return x;
    }
    else{
        return -1;   //return -1 in case stack is empty
    }
}
int top(){
    if(!st1.empty()){
        return st1.top();
    }
    return -1;   //return -1 in case stack is empty
}
int getMin(){
    if(!st2.empty()){
        return st2.top();
    }
    return -1;   //return -1 in case stack is empty
}

int main(){
    return 0;
}