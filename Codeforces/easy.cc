#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n, temp;
  
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> temp;
    if(temp==1){
      cout << "HARD" << '\n';
      return;
    }
  }
  cout << "EASY" << '\n';
}

int main(){
  solve();
}
