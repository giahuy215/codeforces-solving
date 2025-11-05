/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 05-11-2025
*/
/*
  https://codeforces.com/problemset/problem/2149/B
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
    ll n;
    cin >> n;
    ll a[n];
    FOR(i, 0, n) {
      cin >> a[i];
    }
    sort(a, a + n);
    ll res = 0;
    FOR(i, 0, n) {
      if(i % 2 == 1) {
        int temp = a[i] - a[i - 1];
        if(temp > res) {
          res = temp;
        }
      }
    }
    cout << res << endl;
  }
  
  return 0;
}