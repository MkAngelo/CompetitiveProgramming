#include <bits/stdc++.h>
using namespace std;

void run_case(){
    int n, m;
    cin >> n >> m;

    for(int i=1; i<=n; i++){
        if(i % 2 != 0){
            for(int j=0; j<m; j++)
                cout << "#";
        }
        else if (i%4==0){
            cout << "#";
            for(int k=0; k<m-1; k++)
                cout << ".";
        }
        else{
            for(int k=0; k<m-1; k++)
                cout << ".";
            cout << "#";
        }
        cout << "\n";
    }    
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	/*int tt; cin >> tt;
	for(int i = 0; i<tt; ++i){
		run_case();
	}*/
    run_case();
}
