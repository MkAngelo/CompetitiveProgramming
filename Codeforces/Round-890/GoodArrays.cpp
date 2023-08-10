#include <bits/stdc++.h>
using namespace std;

void run_case(){
	int N;
	cin >> N;
	vector<int64_t> A(N);

	for(auto &a : A)
		cin >> a;

	int64_t sum = accumulate(A.begin(), A.end(), INT64_C(0));
	int64_t alternative_sum = 0;

	for(auto &a : A)
		alternative_sum += a == 1 ? 2 : 1;

	cout << (N > 1 && sum >= alternative_sum ? "YES" : "NO") << "\n";
}

int main(){
	int tt; cin >> tt;
	for(int i = 0; i<tt; ++i){
		run_case();
	}
}