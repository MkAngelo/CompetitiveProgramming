// Author: Angel Quintana

#include <bits/stdc++.h>

using namespace std;

void solve(){
    string palabra;
    cin >> palabra;

    int n = palabra.size();

    if(n <=10){
        cout << palabra << endl;
        return;
    }

    cout << palabra.at(0) << n - 2 << palabra.at(n-1) << endl;

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
