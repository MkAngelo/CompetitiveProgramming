#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n, free=0, f, p;
  cin >> n;

  for(int i=0; i<n; i++){
    cin >> f >> p;
    if (p-f >= 2)
      free++;
  }
  cout<<free<<'\n';
}

int main(){
  solve();
}
