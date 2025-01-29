// Author: Angel Quintana

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    if(n%2==0)
        cout << "Sakurako" << endl;
    else
        cout << "Kosuke" << endl;
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
