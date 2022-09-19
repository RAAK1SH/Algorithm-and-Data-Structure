#include <iostream>
#include <queue>
using namespace std;
int main(){
    int n; 
    cin >> n;
    int arr[n];
    queue<int> q;
    for(int i = 0; i < n; i++){
        int numb; cin>> numb;
        arr[i] = numb;
        q.push(numb);
    }
    int prev; int index = 0;
    while(!q.empty()){
        prev = -1;
        if(q.size()==n) cout<< -1 <<" ";
        else{
            for(int i=index; i >= 0; i--){
                if(arr[i] <= q.front()){
                    prev = arr[i];
                    break;
                }
            }
            cout<< prev <<" ";
            index++;
        }
        q.pop();
    }

    return 0;
}