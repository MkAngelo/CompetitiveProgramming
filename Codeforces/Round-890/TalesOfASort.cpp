#include <bits/stdc++.h>
using namespace std;

void run_case(){
	int N; cin >> N;
	vector<int> A(N);

	for(auto &a : A)
		cin >> a;

	int ans = 0;

	for(int i = 0; i < N - 1; ++i)
		if(A[i] > A[i + 1])
			ans = max(ans, A[i]);

	cout << ans << "\n";
}

int main(){
	int tt; cin >> tt;
	for(int i=0; i<tt; ++i)
		run_case();
}