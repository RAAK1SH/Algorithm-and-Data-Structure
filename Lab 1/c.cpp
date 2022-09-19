#include <iostream>
#include <stack>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    stack<char> q1; stack<char> q2;
    for(int i=0; i<a.size(); i++){
        if(q1.empty()){
            if(a[i]!='#') q1.push(a[i]);
        }
        else{
            if(a[i]=='#') q1.pop();
            else q1.push(a[i]);
        }
    }
    for(int i=0; i<b.size(); i++){
        if(q2.empty()){
            if(b[i]!='#') q2.push(b[i]);
        }
        else{
            if(b[i]=='#') q2.pop();
            else q2.push(b[i]);
        }
    }
    if(q1.size()!=q2.size()){
        cout<<"No";
        return 0;
    }
    while(!q1.empty() && !q2.empty()){
        if(q1.top()!=q2.top()){
            cout<<"No";
            break;
        }
        q1.pop(); q2.pop();
    }
    cout<<"Yes";
    return 0;
}
