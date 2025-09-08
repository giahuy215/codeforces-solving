/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 08-09-2025
*/
/*
  https://codeforces.com/problemset/problem/2133/A
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
    int a[n];
    int b[101] = {0};
    for(int i = 0; i < n; i++) {
      cin >> a[i];
      b[a[i]]++;
    }

    bool ans = false;
    for(int i = 0; i < n; i++) {
      if(b[a[i]] > 1) {
        ans = true;
        break;
      }
    }
    if(ans) cout << "YES\n";
    else cout << "NO\n";
  }
  
  return 0;
}