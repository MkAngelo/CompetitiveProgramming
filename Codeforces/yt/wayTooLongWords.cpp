// Author: Angel Quintana

#include <bits/stdc++.h>

using namespace std;

void solve(){
    string word;
    cin >> word;

    int len = word.length();

    if(len > 10){
        cout << word.at(0) << len - 2 << word.at(len-1) << endl; 
    }else{
        cout << word << endl;
    }
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
