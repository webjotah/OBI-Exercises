#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    map<int, int> at;
    map<int, int> ar;
    int n, auxi;
    char auxc;
    
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> auxc >> auxi;
        
        if(auxc == 'R'){
            auto res = at.insert({auxi, 0});
            auto res2 = ar.insert({auxi, -1});
            
            if(!res.second){
                ar[auxi] = -1;
            }
            
            auto itar = ar.begin();
            auto itat = at.begin();
            for(int j = 0; j < at.size(); j++){
                if(itar->second == -1 && itat->first != auxi){
                    itat->second = itat->second + 1;
                }
                ++itar;
                ++itat;
            }
        } else if(auxc == 'E'){
            ar[auxi] = 0;
            auto itar = ar.begin();
            auto itat = at.begin();
            for(int j = 0; j < at.size(); j++){
                if(itar->second == -1){
                    itat->second = itat->second + 1;
                }
                ++itar;
                ++itat;
            }
        } else {
            auto itar = ar.begin();
            auto itat = at.begin();
            for(int j = 0; j < at.size(); j++){
                if(itar->second == -1){
                    itat->second = itat->second + auxi;
                }
                ++itar;
                ++itat;
            }
        }
    }
    
    
    auto itar = ar.begin();
    auto itat = at.begin();
    for(int i = 0; i < at.size(); i++){
        if(itar->second == 0){
            cout << itat->first << " " << itat->second << endl;
        } else {
            cout << itar->first << " " << itar->second << endl;
        }
        
        ++itat;
        ++itar;
    }
    
    return 0;
}