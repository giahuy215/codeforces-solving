/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 30-10-2025
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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == b && b == c && c == d) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  
  return 0;
}