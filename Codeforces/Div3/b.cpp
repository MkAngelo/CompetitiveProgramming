// Author: Angel Quintana

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    vector<vector<int>> a(n, vector<int>(n));

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> a[i][j];

    vector<int> diff(n*2-1, 0);

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            diff[i-j+n-1] = min(diff[i-j+n-1],a[i][j]);

    int ans = 0;

    for(int i=0; i<diff.size(); i++)
        if (diff[i] < 0)
            ans -= diff[i];

    cout << ans << endl;
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
