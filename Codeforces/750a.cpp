#include <bits/stdc++.h>
using namespace std;

void run_case(){
	int p, t, total = 240, ts;
	cin >> p >> t;
	
	total -= t;
	int ans = 0;

	for(int i=1; i<= p; i++){
		if(i * 5 <= total){
			total -= (i * 5);
			ans++;
		} else {
			break;
		}
	}	

	cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	
	run_case();

	return 0;

}
