#include <bits/stdc++.h>
using namespace std;

void run_case(){
	int n,l;
	cin >> n;
	string s, result;
	cin >> s;
	l = s.length() - 1;

	bool x = false;
	if(s[0] > s[l])
		x = true;
	
	int t = n%2;

	if (!x && t==0 && n>=2){
		cout << s << endl;
		return;
	} else if(x && t==0 && n>=2){
		string str = s;
		reverse(str.begin(), str.end());
		str += s;
		cout << str << endl;
		return;
	}
	
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int tt; cin >> tt;
	for(int i = 0; i<tt; ++i){
		run_case();
	}
}
