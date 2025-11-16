/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 16-11-2025

  Link problem: https://codeforces.com/problemset/problem/2147/A
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
    int x, y;
    cin >> x >> y;
    if(x < y) {
      cout << 2;
    } else if(x == y) {
      cout << -1;
    } else {
      if(y != 1 && x - y >= 2) {
        cout << 3;
      } else {
        cout << -1;
      }
    }
    cout << endl;
  }
  
  return 0;
}