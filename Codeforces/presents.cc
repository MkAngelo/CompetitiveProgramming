#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin >> n;
  vector<int> f(n);
  for(int &s : f)
    cin>>s;

  for(int i=1; i<=n; i++){
    for(int j=0; j<n; j++){
      if(i==f[j])
        cout<<j+1<<" ";
    }
  }
  cout<<'\n';
}

int main(){
  solve(); 
}
