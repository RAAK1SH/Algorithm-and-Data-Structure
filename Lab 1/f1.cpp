#include <iostream>
#include <stack>
using namespace std;
bool isPrime(int N){
    for(int i = 2; i < N; i++){
        if(N % i == 0) return false;
    }
    return true;
}
int main(){
    stack<int> nums; 
    int n; 
    cin>>n;
    int index = 0;
    for(int i = 2; ; i++){
        if(index == n) break;
        if(isPrime(i)){
            nums.push(i);
            index++;
        }
    }
    cout << nums.top();
}

