#include <bits/stdc++.h>
using namespace std;

void run_case(){
	
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;

    vector<int> police(n);

    for(int i=0; i<n; ++i){
        cin >> police[i];
    }

    int officers = 0;
    int crimes = 0;

    for(int i=0; i<n; ++i){
        if (police[i] < 0 && officers == 0){
            crimes += police[i] * -1;
        } else if (police[i] > 0) {
            officers += police[i];
        } else if (police[i] < 0 && officers > 0){
            if(officers == police[i] * -1){
                officers = 0;
            }else if(officers > police[i] * -1){
                officers += police[i];
            } else{
                int temp = police[i] + officers;
                crimes += temp * -1;
                officers = 0;
            }
        }
        //cout << officers << " " << crimes << endl;
    }

    cout << crimes << endl;
}
