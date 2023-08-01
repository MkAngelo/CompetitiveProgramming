#include <bits/stdc++.h>
using namespace std;

int solution(){
    int n; cin>>n;
    vector<int> V(n-1);
    
    for(int i=0; i<n-1; i++)
        cin >> V[i];    

    sort(V.begin(), V.end());

    for(int i=0; i<n-1; i++){
        if(V[i]!= i+1){
            return i+1;
        }
    }

    return n;
}

int main(){
    cout << solution();
}