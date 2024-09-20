// Author: Angel Quintana

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;

    vector<int> A(n);

    for(int &a : A)
        cin >> a;

    int contador = 0;
    for(int a : A){
        if(a>0 && a >=A[k-1])
            contador++;
    }

    cout << contador << endl;
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
