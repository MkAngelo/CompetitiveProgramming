#include <bits/stdc++.h>
using namespace std;

int main(){
	int m, n, f[1000];
	cin >> n >> m;

	for(int i=0; i<m; ++i)
		cin >> f[i];

	sort(f, f+m); // ordenar por direccion de memoria

	int least = f[n-1] - f[0];

	for(int i=1; i<=m-n; ++i)
		if(f[i+n-1] - f[i] < least)
			least = f[i+n-1] - f[i];
	
	cout << least << "\n";
}