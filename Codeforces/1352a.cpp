#include <bits/stdc++.h>
using namespace std;

void run_case(){
	int pw = 1;
	vector<int> v;
	int n; cin >> n;
	
	while (n){
		if(n%10)
			v.push_back((n%10)*pw);
		n /= 10, pw *= 10;
	}

	cout << v.size() << '\n';

	for(int i : v)
		cout << i << ' ';
	cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int tt; cin >> tt;
	for(int i = 0; i<tt; ++i){
		run_case();
	}
}
