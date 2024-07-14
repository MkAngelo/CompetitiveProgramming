#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int n, l;
	cin >> n >> l;

	vector<int> in(n);

	for(auto &i : in)
		cin >> i;

	sort(in.begin(), in.end());

	//cout << in.back() << endl;

	double ans = max(in[0], l-in.back());
	
	for(int i=0; i<n-1; i++){
		ans = max(ans, (in[i+1]-in[i])/2.0);
	}

	cout << fixed << setprecision(9) << ans << endl;

	return 0;
}
