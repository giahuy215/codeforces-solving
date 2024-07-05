/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 05-07-2024
*/
/*
  https://codeforces.com/contest/1987/problem/C
  C. Basil's Garden
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  There are n flowers in a row, the i-th of them initially has a positive height of hi meters.

  Every second, the wind will blow from the left, causing the height of some flowers to decrease.

  Specifically, every second, for each i from 1 to n, in this order, the following happens:

  - If i = n or hi > hi + 1, the value of hi changes to max(0,hi−1).
  - How many seconds will pass before hi = 0 for all 1 ≤ i ≤ n for the first time?

  Input
  Each test contains multiple test cases. The first line of input contains a single integer t (1 ≤ t ≤ 10^4) — the number of test cases. 
  The description of the test cases follows.

  The first line of each test case contains a single integer n (1 ≤ n ≤ 10^5) — the number of flowers.

  The second line of each test case contains n integers h1,h2,…,hn (1 ≤ hi ≤ 10^9) — the heights of the flowers.

  It is guaranteed that the sum of n over all test cases does not exceed 10^5.

  Output
  For each test case, output a single integer — the number of seconds that will pass before hi=0 for all 1 ≤ i ≤ n.
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
    ll n, ans = 0;
    cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    ans = a[n - 1];
    for(int i = n - 2; i >= 0; i--) {
      ans = max(ans + 1, a[i]);
    }
    cout << ans << "\n";
  }
  
  return 0;
}