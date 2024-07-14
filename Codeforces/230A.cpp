#include <bits/stdc++.h>
using namespace std;

void run_case(){
	
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int s, n;
    cin >> s >> n;
    vector<pair<int, int> > drags(n);

    for(int i=0; i<n; ++i){
        cin >> drags[i].first;
        cin >> drags[i].second;
    }
    sort(drags.begin(), drags.end());
    bool flag = true;

    for(int i=0; i<n; ++i){
        if(s > drags[i].first)
            s += drags[i].second;
        else{
            flag = false;
            cout << "NO" << endl;
            break;
        }
    }

    if(flag)
        cout << "YES" << endl;

    return 0;
}
