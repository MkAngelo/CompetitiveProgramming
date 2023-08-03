#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	string s;
	map<string, int> database;

	for(int i=0; i<n; ++i){
		cin >> s;
		if(database.count(s) == 0)
			cout << "OK" << "\n";
		else// Muestra el valor que tiene en vez de agregar a la lista un nuevo elemento
			cout << s << database[s] << "\n"; 
		database[s]++;
	}
}