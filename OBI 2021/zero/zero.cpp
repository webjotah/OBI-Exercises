#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    int n, aux, cont = 0, naux;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> aux;
        if(aux == 0){
            s.pop();
        } else {
            s.push(aux);
        }
    }
    
    naux = s.size();
    
    for(int i = 0; i < naux; i++){
        cont = cont + s.top();
        s.pop();
    }
    
    cout << cont;
    
    return 0;
}