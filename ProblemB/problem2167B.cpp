/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 30-10-2025
*/
/*
  https://codeforces.com/contest/2167/problem/B
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
    string s, t;
    cin >> s >> t;
    sort(all(s));
    sort(all(t));
    cout << (s == t ? "YES" : "NO") << endl;
  }
  
  return 0;
}