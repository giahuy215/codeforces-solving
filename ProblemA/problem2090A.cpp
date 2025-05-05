/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 05-05-2025
*/
/*
  https://codeforces.com/problemset/problem/2090/A
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
    int x, y, a;
    cin >> x >> y >> a;
    if((a % (x + y) < x)) {
      cout << "NO\n";
    } else {
      cout << "YES\n";
    }
  }
  
  return 0;
}
