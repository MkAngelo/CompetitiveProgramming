#include <bits/stdc++.h>
using namespace std;

void run_case(){
	string s;
	int n;
	cin >> n;
	if(n == 1){
		cout << "NO" << endl;
		return;
	}
	for(int i=0; i<n; i++)
		s += "A";

	cout << "YES" << endl;
	cout << s << endl;
	return;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int tt; cin >> tt;
	for(int i = 0; i<tt; ++i){
		run_case();
	}
}
