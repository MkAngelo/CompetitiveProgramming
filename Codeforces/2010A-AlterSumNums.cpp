// Author: Angel Quintana
// Title: Alternating Sum of Numbers

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int times;
    cin >> times;

    int total = 0;

    for(int i=1; i<=times; ++i){
       int aux; cin >> aux;
       if(i%2 != 0)
          total += aux; 
       else
          total -= aux;
    }
    cout << total << endl;

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
