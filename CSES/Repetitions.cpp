#include <bits/stdc++.h>
using namespace std;

int solve(){
	string S; cin >> S;
	int count = 1, ans = 1;
	map <char, int> freq;

	for(int i=0; i<S.length()-1; i++){
		if(S[i] == S[i+1])
			count++;
		else
			count=1;
		ans = max(ans, count);
	}

	return ans;
}

int main(){
	cout << solve();
}