// Author: Angel Quintana

#include <bits/stdc++.h>

using namespace std;

void solve(){
  int n, x, y;
  cin >> n >> x >> y;
  
  int c = 0;
  while(n > 0){
    int aux = min(x,y);
    n-= aux;
    c++;
  }
  cout << c << endl;
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
