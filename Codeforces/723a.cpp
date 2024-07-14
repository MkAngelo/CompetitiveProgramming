#include <bits/stdc++.h>
using namespace std;

void run_case(){
	
	vector<int> pos(3);
	
	for(int &p : pos)
		cin >> p;
	
	sort(pos.begin(), pos.end());

	vector<int> dis(3);
	
	dis[0] = pos[1] - pos[0];
	dis[1] = pos[2] - pos[0];
	dis[2] = pos[2] - pos[1]; 

	int m1, m2, m3;
	m1 = min(dis[0], dis[1]);
	m2 = min(dis[1], dis[2]);

	cout << m1 + m2 << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	run_case();
	return 0;
}
