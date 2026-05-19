#include<bits/stdc++.h>
 
using namespace std; 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    cin >> str;
    int T = 0;
    int A = 0;
    int U= 0;
    int P = 0;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='T'){
            T++;
        }
        if(str[i]=='A'){
            A++;
        }
        if(str[i]=='U'){
            U++;
        }
        if(str[i]=='P'){
            P++;
        }
    }
    int res = min({T, A+U, P});
 
    cout << res << "\n";
 
    return 0;
}