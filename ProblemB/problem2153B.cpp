/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 07-11-2025

  Link problem: https://codeforces.com/problemset/problem/2153/B
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
    ll x, y, z;
    cin >> x >> y >> z;
    ll a, b, c;
    a = x | z;
    b = x | y;
    c = y | z;

    ll j, q, k;
    j = a & b;
    q = b & c;
    k = a & c;
    if(j == x && q == y && k == z) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
    
  }
  
  return 0;
}