#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;

	if(n==1){
		cout << 1 << "\n";
		return;
	}

	if(n<4){
		cout << "NO SOLUTION" << "\n";
		return;
	}

	int even = 2;
	while(even <= n){
		cout << even << " ";
		even += 2;
	}

	int odd = 1;
	while(odd <= n){
		cout << odd << " ";
		odd += 2;
	}
}

int main(){
	solve();
}