/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 14-11-2025

  Link problem: https://codeforces.com/contest/2145/problem/B
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
    int n, k, cnt0 = 0, cnt1 = 0, cnt2 = 0;
    cin >> n >> k;
    
    string s;
    for(int i = 0; i < k; i++) {
      char c;
      cin >> c;
      s += c;
      if(c == '0') cnt0++;
      else if(c == '1') cnt1++;
      else cnt2++;
    }

    string ans(n, '+');
    for (int i = 0; i < n; ++i) {
      if (i < cnt0 + cnt2 || i >= n - cnt1 - cnt2) ans[i] = '?';
      if (i < cnt0 || i >= n - cnt1 || k == n) ans[i] = '-';
    }
    cout << ans << endl;
  }
  
  return 0;
}