#include <bits/stdc++.h>
using namespace std;

void run_case(){
    int n;
    cin >> n;
    vector<int> v;
    map<int, int> ma;

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
        ma[x]++;
    }

    if(ma.size()==1){
        cout << -1 << endl;
        return;
    }

    int x = v[0];
    int ix = 0;
    int ans = n;

    for(int i=0; i<n; i++){
        if(v[i] == v[0]){
            ix++;
        } else{
            ans = min(ans, ix);
            ix = 0;
        }
    }

    ans = min(ans, ix);
    cout<< ans << endl;

	
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int tt; cin >> tt;
	for(int i = 0; i<tt; ++i){
		run_case();
	}
}
