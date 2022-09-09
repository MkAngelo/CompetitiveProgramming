#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
  ll n;
  string temp, curr="00";
  int groups=1;
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> temp;
    if(curr=="00")
      curr = temp;
    if(temp!=curr){
      groups++;
      curr = temp;
    }
  }
  cout << groups << '\n';
}

int main(){
  solve();
}
