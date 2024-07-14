#include <bits/stdc++.h>
using namespace std;

void run_case(){
    int M, K, Al, Ak;
    cin >> M >> K >> Al >> Ak;
    if(Al >= M){
        cout << 0 << endl;    
        return;
    }
    if(Al==0 && Ak==0){
        int r,c;
        c = M / K;
        r = M % K;
        cout << c + r << endl;
        return;
    }
    cout << 0 << endl;
}

int main(){
	int tt; cin >> tt;
	for(int i = 0; i<tt; ++i){
		run_case();
	}
}
