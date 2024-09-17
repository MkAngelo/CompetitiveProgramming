// Author: Angel Quintana
// THREE BROTHERS

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n1, n2;
    cin >> n1 >> n2;

    int sum = n1 + n2;
    cout << 6 - sum << endl; 
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
