/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 16-11-2025

  Link problem: https://codeforces.com/problemset/problem/2147/B
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
    int n;
    cin >> n;
    for(int i = n; i >= 1; i--) {
      cout << i << " ";
    }
    cout << n << " ";
    for(int i = 1; i < n; i++) {
      cout << i << " ";
    }
    cout << endl;
  }
  
  return 0;
}