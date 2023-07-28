#include <bits/stdc++.h>
using namespace std;

void solve(){
  string n;
  cin >> n;
  for(int i=0; i<n.size(); i++){
    if(n[i]=='H' || n[i]=='Q' || n[i]=='9'){
      cout << "YES" << '\n';
      return;
    }
  }
  cout << "NO" << '\n';
}

int main(){
  solve(); 
}
