// Author: Angel Quintana

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, contador=0; cin >> n;

    for(int i=0; i<n; ++i){
        int p1,p2,p3;
        cin >> p1 >> p2 >> p3;

        if(p1 + p2 + p3 >= 2)
           ++contador; 
    }

    cout << contador << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int tt;
    //cin >> tt;
    tt = 1;
    for(int i=0; i<tt; ++i){
        solve();
    }
    return 0;
}
