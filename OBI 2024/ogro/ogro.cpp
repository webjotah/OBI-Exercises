#include <bits/stdc++.h>
using namespace std;

int main (){
    int E, D;

    cin >> E >> D;

    if(E > D){
        cout << E + D;
    } else {
        cout << 2*(D-E);
    }

    return 0;
}