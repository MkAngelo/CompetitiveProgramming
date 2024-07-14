#include <bits/stdc++.h>
using namespace std;

void run_case(){
	int n;
	string s, result;
	cin >> n >> s;

	int x = 0;
	for(int i=0; i<s.size()/2; i++){
		if(s[i]<s[s.size()-i-1]) {x=0; break;}
		if(s[i]>s[s.size()-i-1]) {x=1; break;}
	}
	if(x==0) cout << s << "\n";
	else{
		string s1=s; reverse(s1.begin(),s1.end());
		cout<<s1<<s<<"\n";
	}
	return;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int tt; cin >> tt;
	for(int i = 0; i<tt; ++i){
		run_case();
	}
}
