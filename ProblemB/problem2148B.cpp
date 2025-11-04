/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 04-11-2025
*/
/*
  https://codeforces.com/contest/2148/problem/B
*/
#include <bits/stdc++.h>
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
    ll n, m, x, y, count = 0;
    cin >> n >> m >> x >> y;

    ll a[n], b[m];
    for(ll i = 0; i < n; i++) {
      cin >> a[i];
      if(a[i] <= y) count++;
    }  

    for(ll j = 0; j < m; j++) {
      cin >> b[j];
      if(b[j] <= x) count++;
    }
    cout << count << endl;
  }
  
  return 0;
}