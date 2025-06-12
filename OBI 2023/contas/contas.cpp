#include <bits/stdc++.h>
using namespace std;

int main (){
    int v, l, m, n;
    vector<int> vec;

    cin >> v >> l >> m >> n;

    vec.push_back(l);
    vec.push_back(m);
    vec.push_back(n);

    sort(vec.begin(), vec.end());

    for(int i = 0; i < 3; i++){
        if(v - vec[i] >= 0){
            v = v-vec[i];
        } else {
            cout << i;
            return 0;
        }
    }

    cout << 3;

    return 0;
}