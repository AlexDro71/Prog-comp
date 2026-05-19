#include<bits/stdc++.h>

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    vector<long long> divs;
    for(int i=0; i<n; i++){
        long long d;
        cin >> d;
        divs.push_back(d);
    }
    bool posible = false;
    long long x;
    long long dn;


    
    if(posible){
        cout << x << dn << "\n";
    }else{
        cout << '*' << "\n";
    }
    return 0;
}
