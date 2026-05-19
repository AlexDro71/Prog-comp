#include<bits/stdc++.h>
using namespace std; 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int A, B, C;
    cin >> A;
    cin >> B;
    cin >> C;
 
    if(A+B<=C || A+C<=B || B+C<=A){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }
 
    return 0;
}