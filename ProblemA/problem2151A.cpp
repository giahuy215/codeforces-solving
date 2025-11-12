/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 12-11-2025

  Link problem: https://codeforces.com/problemset/problem/2151/A
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
    int n, m;
    cin >> n >> m;
    int a[m];
    bool up = true;
    for(int i = 0; i < m; i++) {
      cin >> a[i];
      if(i > 0 && a[i] <= a[i - 1]) {
        up = false;
      }
    }
    if(up) {
      cout << n - a[m - 1] + 1 << endl;
    } else {
      cout << 1 << endl;
    }
  }
  
  return 0;
}