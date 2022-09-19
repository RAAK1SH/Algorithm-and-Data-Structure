#include <iostream>
#include <queue>
using namespace std;
int main(){

    int n; cin>>n;
    queue<int> q;
    if(n==1){ cout<<"NO"; return 0; }
    else if(n==2){ cout<<"YES"; return 0;}
    for(int i=2; i<n; i++){
        q.push(i);
    }
    while(!q.empty()){
        if(n%q.front()==0){
            cout<<"NO";
            return 0;
        }
        q.pop();
    }
    cout<<"YES";
    return 0;
}