#include <bits/stdc++.h>
using namespace std;

int main (){
    int l, c, n, cl, cc, cont = 0;

    cin >> l >> c;

    int m[l][c];

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            cin >> m[i][j];
        }
    }

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> cl >> cc;
        if(m[cl-1][cc-1] != 0){
            m[cl-1][cc-1]--;
            cont++;
        }
    }

    cout << cont;


    // for(int i = 0; i < l; i++){
    //     for(int j = 0; j < c; j++){
    //         cout << m[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}