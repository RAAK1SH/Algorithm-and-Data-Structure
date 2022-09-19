#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque <int> sak, kat;
    int n; cin >> n;
    for(int i = 1 ; i < n + 1; i++){
        char x; cin >> x;
        if(x == 'S')sak.push_back(i);
        else kat.push_back(i);
    }

    while(true){
        if(sak.empty()){
            cout << "KATSURAGI";
            break;
        }
        else if(kat.empty()){
            cout << "SAKAYANAGI";
            break;
        }

        if(sak.front() > kat.front()){
            sak.pop_front();
            kat.push_back(kat.front() + n );
            kat.pop_front();
        }
        else if(sak.front() < kat.front()){
            kat.pop_front();
            sak.push_back(sak.front() + n );
            sak.pop_front();
        }
    }

}
/*
KSKS
index = 0
KKS
index = 1
KK

KATSURAGI


SSKKK
index = 0
SSKK
index = 1
SSK
index = 2
SK
index = 0
S

SAKAYANAGI

*/