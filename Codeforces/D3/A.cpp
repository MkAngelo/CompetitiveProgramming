// Author: Angel Quintana

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> S(n);
    map<int,int> freq;

    for(auto &s : S){
        cin >> s;
        freq[s]++;
    }
    
    

    int ans = 0;

    for(auto &pr : freq){
        if(pr.second >= 2){
            int temp = pr.second / 2;
            ans += temp;
        }
        //cout << pr.first << " " << pr.second << endl;
    }

    cout << ans << endl;

}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int tt;
    cin >> tt;
    //tt = 1;
    for(int i=0; i<tt; ++i){
        solve();
    }

    return 0;
}
