#include <bits/stdc++.h>
using namespace std;

void run_case(){
	int n;
	cin >> n;
	vector<int> scores(n);

	for(auto &s : scores)
		cin >> s;

	int max = scores[0];
	int min = scores[0];
	int count=0;

	for(int i=0; i<n; i++){
		if(scores[i] > max){
			max = scores[i];
			count++;
		}
		if(scores[i] < min){
			min = scores[i];
			count++;
		}
	}

	cout << count << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	run_case();
	return 0;
}
