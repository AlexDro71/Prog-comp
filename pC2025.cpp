#include<bits/stdc++.h>

using namespace std; 

int s(const vector<int> &p){
    int res=0;
    for(int i=0; i<p.size(); i++){
        if(p[p[i]]==i) res+=1;
    }
    return res;
}

void rot(vector<int> &p){
    for(int i=0; i<p.size()-1; i++){
        swap(p[i], p[i+1]);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> p;
    for(int i=0; i<n; i++){
        int pn;
        cin >> pn;
        p.push_back(pn-1);
    }
    int res=s(p);
    for(int i=1; i<p.size(); i++){
        rot(p);
        res+=s(p);
    }



    cout << res << "\n";
    return 0;
}
