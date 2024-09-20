// Author: Angel Quintana

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, x=0;
    cin >> n;

    for(int i=0; i<n; ++i){
        string op;
        cin >> op;
        if(op.at(1)=='+') 
            ++x;
        else
            --x;
    }

    cout << x << endl;
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
