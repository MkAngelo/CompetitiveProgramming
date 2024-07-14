#include <bits/stdc++.h>
using namespace std;

void run_case(){
	int num_elem;
	cin >> num_elem;

	vector<int> numbers(num_elem);
	for(int &n : numbers)
		cin >> n;
	
	sort(numbers.begin(), numbers.end());

	int ans = abs(numbers[0] - numbers[num_elem-1]) + abs(numbers[num_elem - 1] - numbers[1]) + abs(numbers[1] - numbers[num_elem-2]) + abs(numbers[0] - numbers[num_elem-2]);
	cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int tt; cin >> tt;
	for(int i = 0; i<tt; ++i){
		run_case();
	}
}
