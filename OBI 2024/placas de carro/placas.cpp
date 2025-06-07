#include <bits/stdc++.h>
using namespace std;

int main (){
    string str;

    cin >> str;

    if(str.length() > 8 || str.length() < 7){
        cout << 0;
        return 0;
    };

    for(int i = 0; i < str.length(); i++){
        if(str.length() == 8){
            if(i <= 2 && !isalpha(str[i])){
                cout << 0;
                return 0;
            } else if(i == 3 && str[i] != '-'){
                cout << 0; 
                return 0;
            } else if(i > 3 && !isdigit(str[i])){
                cout << 0;; 
                return 0;
            } else if (i == 7 && isdigit(str[i])){
                cout << 1;
                return 0; 
            }
        }

        if(str.length() == 7){
            
        }
    }

    return 0;
}