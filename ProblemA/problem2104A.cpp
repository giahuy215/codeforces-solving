/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 15-05-2025
*/
/*
  https://codeforces.com/problemset/problem/2104/A
*/
#include <bits/stdc++.h>
#define endl "\n"

typedef long long ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while(t--) {
    int x, y, z; 
    cin >> x >> y >> z;
    if(z - y < y - x) {
      cout << "NO" << endl;
    } else if((x + y + z) % 3 != 0) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }
  
  return 0;
}
