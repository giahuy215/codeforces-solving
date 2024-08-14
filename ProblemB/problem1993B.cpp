/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 07-08-2024
*/
/*
  https://codeforces.com/contest/1993/problem/B
  B. Parity and Sum
  time limit per test: 1 second
  memory limit per test: 256 megabytes

  Given an array a of n positive integers.

  In one operation, you can pick any pair of indexes (i,j) such that ai and aj have distinct parity, then replace the smaller one with the sum of them. More formally:

  - If ai<aj, replace ai with ai+aj;
  - Otherwise, replace aj with ai+aj.
  Find the minimum number of operations needed to make all elements of the array have the same parity.

  Input
  The first line contains a single integer t (1 ≤ t ≤ 10^4) — the number of test cases.

  The first line of each test case contains a single integer n (1 ≤ n ≤ 2⋅10^5).

  The second line contains n integers a1,a2,…,an (1 ≤ ai ≤ 10^9) — the elements of array a.

  It is guaranteed that the sum of n over all test cases does not exceed 2⋅10^5.

  Output
  For each test case, output a single integer — the minimum number of operations required.
*/
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while(t--) {
    ll n, mx = 0;
    cin >> n;
    ll a[n];
    vector<ll> v;
    for(ll i = 0; i < n; i++) {
      cin >> a[i];
      if(a[i] % 2 != 0) mx = max(a[i], mx);
      else {
        v.push_back(a[i]);
      }
    }
    if(mx == 0 || v.size() == 0) {
      cout << 0 << "\n";
      continue;
    } else {
      int cnt = 0;
      sort(v.begin(), v.begin() + v.size());
      for(auto x : v) {
        if(mx > x) mx += x;
        else {
          cnt++;
          break;
        }
      }
      if(cnt == 0) cout << v.size() << "\n";
      else cout << v.size() + 1 << "\n";
    }
  }
  
  return 0;
}