// Author: Angel Quintana

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> A(n);

    for(auto &a : A)
        cin >> a;

    sort(A.begin(), A.end());
    

    int l = ceil(((float)n)/2);

    cout << l << " " << A[n-1] + l << endl;
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
