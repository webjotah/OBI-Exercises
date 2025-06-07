#include <bits/stdc++.h>
using namespace std;

int main (){
    int k, n, aux;
    vector<int> v;

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> aux;
        v.push_back(aux);
    }

    sort(v.rbegin(), v.rend());

    cout << v[k-1];

    return 0;
}