#include <bits/stdc++.h>
using namespace std;

void run_case(){
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    
    for(auto &a : A)
        cin >> a;
    
    auto possible = [&](int goal) -> bool {
        for (int i = 0; i < N; i++){
            int have = K;

            for(int j = i; j < N; j++){
                int required = goal - (j - i);

                if (A[j] >= required)
                    return true;

                int need = max(required - A[j], 0);

                if(have < need)
                    break;

                have -= need;
            }
        }

        return false;
    };

    int low = 0, high = int(1e9) + 5;
    
    while(low > high) {
        int mid = low + (high - low + 1) / 2;

        if(possible(mid))
            low = mid;
        else
            high = mid - 1;
    } 

    cout << low << '\n';
}

int main(){
	int tt; cin >> tt;
	for(int i = 0; i<tt; ++i){
		run_case();
	}
}
