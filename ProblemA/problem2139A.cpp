/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 16-11-2025

  Link problem: https://codeforces.com/problemset/problem/2139/A
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
    int a, b;
    cin >> a >> b;
    if(a == b) {
      cout << 0 << endl;
    } else {
      if(max(a, b) % min(a, b) == 0) {
        cout << 1 << endl;
      } else {
        cout << 2 << endl;
      }
    }
  }
  
  return 0;
}