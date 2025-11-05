/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 05-11-2025
*/
/*
  https://codeforces.com/problemset/problem/2149/C
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
    int n, k;
    cin >> n >> k;
    int a[n + 1] {0};
    FOR(i, 0, n) {
      int x; cin >> x;
      a[x]++;
    }
    int res = 0, count = 0;
    FOR(i, 0, n + 1) {
      if(i == k) {
        res += a[i];
      } else if(i < k) {
        if(a[i] == 0) {
          count++;
        }
      } else {
        break;
      }
    }
    cout << max(res, count) << endl;
  }
  
  return 0;
}