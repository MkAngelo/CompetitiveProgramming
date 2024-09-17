// Author: Angel Quintana

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    n++;
    while(--n){
        int aux, counter=2;
        cin >> aux;
        if(aux % 2 == 0 && aux != 2) ++counter;
        if(aux % 3 == 0 && aux != 3) ++counter;
        if(aux % 5 == 0 && aux != 5) ++counter;
        if(aux % 7 == 0 && aux != 7) ++counter;
        
        cout << (counter==3 ? "YES" : "NO") << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int tt;
//    cin >> tt;
    tt = 1;
    for(int i=0; i<tt; ++i){
        solve();
    }

    return 0;
}
