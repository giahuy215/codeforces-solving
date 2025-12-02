/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 02-12-2025

  Link problem: https://codeforces.com/problemset/problem/2171/A
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
    if(n % 2 == 1) {
      cout << 0 << endl;
    } else {
      cout << n / 4 + 1 << endl;
    }
  }
  
  return 0;
}