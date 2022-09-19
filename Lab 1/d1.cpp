#include <iostream>
#include <stack>
using namespace std;
int main(){
    string st; cin>>st;
    stack<char> s;
    for(int i=0; i<st.size(); i++){
        if(!s.empty()){
            if(st[i]==s.top()){
                s.pop();
            }
            else{
                s.push(st[i]);
            }
        }
        else{
            s.push(st[i]);
        }
    }
    if(s.empty()) cout<<"YES";
    else cout<<"NO";
    return 0;
}
