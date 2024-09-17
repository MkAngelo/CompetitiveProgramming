// Author: Angel Quintana

#include <bits/stdc++.h>

using namespace std;

void solve(){
   string w;
   cin >> w;
   int n = w.size();
   w = " " + w;
   for(int i=n/2+1;i<n;++i){
       if(w.substr(1,i) == w.substr(n-i+1)){
           cout << "YES" << endl;
           cout << w.substr(1,i) <<endl;
           return;
       }
       cout << "NO" << endl;
       return;
   }

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
