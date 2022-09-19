#include <iostream>
#include <deque>
using namespace std;
bool isPrime(int N){
    for(int i=2; i<N; i++){
        if(N%i==0) return false;
    }
    return true;
}
int main(){
    deque<int> nums; int n; cin>>n;
    int index=0, temp=0, last;
    for(int i=2; ; i++){
        if(index==n) break;
        if(isPrime(i)){
            index++;
            last=i;
        }
    }
    for(int i=2; ;i++){
        if(temp==last) break;
        if(isPrime(i)){
            nums.push_back(i);
            temp++;
        }
    }
    cout<<nums.back();
}