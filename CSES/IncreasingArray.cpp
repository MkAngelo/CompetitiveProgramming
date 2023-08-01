#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
	ll n, count=0; cin >> n;
	vector<ll> N(n);

	for(auto &e : N)
		cin >> e;

	for(ll i=1; i<n; i++){
		if(N[i-1]>N[i]){
			count += (N[i-1]-N[i]);
			N[i] = N[i-1];
		}
	}

	cout << count;
}

int main(){
	solve();
}