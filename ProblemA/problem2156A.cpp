/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 08-11-2025

  Link problem: https://codeforces.com/problemset/problem/2156/A
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)
#define all(x) (x).begin(), (x).end()
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
    if(n > 4) {
      cout << (n - 3) / 2 + 1 << endl;
    } else {
      cout << 1 << endl;
    }
  }
  
  return 0;
}