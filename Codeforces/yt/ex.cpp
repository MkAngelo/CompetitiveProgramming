// Author: Angel Quintana

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> A(n);

    for(auto &a : A)
        cin >> a;
    
    int c=0;

    for(int a : A){
        if(a >= A[k]-1 && a> 0) c++;
    }
    cout << c << endl;
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
