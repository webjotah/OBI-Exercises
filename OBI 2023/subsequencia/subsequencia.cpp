#include <bits/stdc++.h>
using namespace std;

int main (){
    int n, m, aux, d, prev;
    char res = 'S';
    vector<int> v;

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> aux;
        v.push_back(aux);
    }

    for(int i = 0; i < m; i++){
        cin >> aux;

        auto it = find(v.begin(), v.end(), aux);

        if(it != v.end()){
            d = distance(v.begin(), it);
            if(i == 0){
                prev = d;
            } else if(prev > d){
                res = 'N';
            }
        } else {
            res = 'N';
        }

        if(it != v.end()){
            v.erase(it);
        }
    }

    cout << res;

    return 0;
}