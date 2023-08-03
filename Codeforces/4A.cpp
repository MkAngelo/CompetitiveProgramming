#include <iostream>
using namespace std;

string solve(){
  uint num; cin >> num;
  if(num%2==0 && num>2)
    return "YES";
  return "NO";
}

int main(){
    cout << solve() << "\n";
}