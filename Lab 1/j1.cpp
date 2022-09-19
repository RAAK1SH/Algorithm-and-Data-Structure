#include <iostream>
#include <deque>
using namespace std;
int main(){
    char command;
    deque<int> d;
    while(true){
        cin>>command;
        if(command=='!') break;
        else if(command=='+'){
            int n; cin>>n;
            d.push_front(n);
        }
        else if(command=='-'){
            int n; cin>>n;
            d.push_back(n);
        }
        else{
            if(d.empty()) cout<<"error\n";
            else{
                if(d.size()!=1) cout<<d.front()+d.back()<<endl;
                else cout<<d.front()*2<<endl;
                if(d.size()!=1){ 
                    d.pop_front();
                    d.pop_back();
                }
                else d.pop_front();
            }
        }
    }

    return 0;
}