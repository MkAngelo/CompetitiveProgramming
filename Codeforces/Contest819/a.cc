#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin >> n;
  vector<int> arr(n);
  for(int &a : arr)
    cin >> a;
  sort(arr.begin(),arr.end());
  int ans = arr[n-1] - arr[0];
  cout << ans << '\n';
}

int main(){
  int t;
  cin >> t;
  for(int i=1; i<=t; i++){
    solve();
  }
}
