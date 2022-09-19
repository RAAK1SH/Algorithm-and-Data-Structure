#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int>first; deque<int>second; int card; int steps=0;
    for(int i=0; i<5; i++){
        cin>>card;
        first.push_back(card);
    }
    for(int i=0; i<5; i++){
        cin>>card;
        second.push_back(card);
    }
    bool game=true;
    while(game){
        if(steps>1000000){
            cout<<"blin nichya";
            break;
        }
        if(first.empty()){
            cout<<"Nursik"<<" "<<steps;
            break;
        }
        else if(second.empty()){
            cout<<"Boris"<<" "<<steps;
            break;
        }
        if(first.front()==0 && second.front()==9){
            first.push_back(first.front());
            first.push_back(second.front());
        }
        else if(second.front()==0 && first.front()==9){
            second.push_back(first.front());
            second.push_back(second.front());
        }
        else if(first.front()>second.front()){
            first.push_back(first.front());
            first.push_back(second.front());
        }
        else{
            second.push_back(first.front());
            second.push_back(second.front());
        }
        second.pop_front();
        first.pop_front();
        steps++;
    }
}