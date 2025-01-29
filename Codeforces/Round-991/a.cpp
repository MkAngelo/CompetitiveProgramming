// Author: Angel Quintana

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m, counter=0;
    cin >> n >> m;
    bool cabe = true;

    for(int i=0; i < n; i++){
        string s;
        cin >> s;
        int len = s.size();
        if(len <= m and cabe){
            m -= len;
            counter++;
        } else{
            cabe = false;
        }
    }
    cout << counter << endl;
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int tt;
    cin >> tt;
    //tt = 1;
    for(int i=0; i<tt; ++i){
        solve();
    }

    return 0;
}
