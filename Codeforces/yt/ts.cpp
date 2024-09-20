// Author: Angel Quintana

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    double n, m, a;
    cin >> n >> m >> a;
    
    ll largo = (ll) ceil(n/a);
    ll ancho = (ll) ceil(m/a);
    ll res = largo * ancho;
    cout << res << endl;
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
