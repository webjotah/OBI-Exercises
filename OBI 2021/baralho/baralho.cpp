#include <bits/stdc++.h>
using namespace std;

int main (){
    string str, aux;
    map<string, int> m;
    vector<int> cont(4,0);
    int i = 0;
    cin >> str;

    while(i < str.length()){
        aux = str.substr(i, 3);

        auto result = m.insert({aux, 0});

        if(!result.second){
            if(aux[2] == 'C'){
                cont[0] = -1;
            }
            if(aux[2] == 'E'){
                cont[1] = -1;
            }
            if(aux[2] == 'U'){
                cont[2] = -1;
            }
            if(aux[2] == 'P'){
                cont[3] = -1;
            }
        } else {
            if(aux[2] == 'C' && cont[0] != -1){
                cont[0]++;
            }
            if(aux[2] == 'E' && cont[1] != -1){
                cont[1]++;
            }
            if(aux[2] == 'U' && cont[2] != -1){
                cont[2]++;
            }
            if(aux[2] == 'P' && cont[3] != -1){
                cont[3]++;
            }
        }

        i = i+3;
    }

    for(int i = 0; i < 4; i++){
        if(cont[i] >= 0){
            cout << 13-cont[i] << endl;
        } else {
            cout << "erro" << endl;
        }
    }
    return 0;
}