#include <bits/stdc++.h>
using namespace std;

void run_case(){
	int n;
	cin >> n;
	vector<int> A(n);
	int maxElement =0;
	int maxCount= 0;

	for(int &a : A)
		cin >> a;

	for(int i=0; i<n; i++){
		if(A[i] > maxElement){
			maxElement = A[i];
			maxCount = 1;
		}else if(A[i] == maxElement){
			maxCount++;
		}
	}
	
	if(maxElement == 0 || maxCount == 1){
		cout << "-1\n";
		return;
	}

	cout << "2\n";
	cout << "1 " << maxCount << "\n";
	cout << maxCount + 1 << " " << n << "\n";
	
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int tt; cin >> tt;
	for(int i = 0; i<tt; ++i){
		run_case();
	}
}
