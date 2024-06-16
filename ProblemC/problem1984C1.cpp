/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1984/C1
  C1. Magnitude (Easy Version)
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  The two versions of the problem are different. You may want to read both versions. You can make hacks only if both versions are solved.

  You are given an array a of length n. Start with c=0. Then, for each i from 1 to n (in increasing order) do exactly one of the following:

  - Option 1: set c to c + ai.
  - Option 2: set c to |c + ai|, where |x| is the absolute value of x.
  Let the maximum final value of c after the procedure described above be equal to k. Find k.

  Input
  The first line contains a single integer t (1 ≤ t ≤ 10^4) — the number of test cases.

  The first line of each test case contains a single integer n (2 ≤ n ≤ 2⋅10^5).

  The second line of each case contains n integers a1, a2, a3, …, an (−10^9 ≤ ai ≤ 10^9).

  The sum of n over all test cases does not exceed 3⋅10^5.

  Output
  For each test case, output a single integer — the value of k.
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
    ll n, c = 0, mn = 0;
    cin >> n;
    ll a[n];
    FOR(i, 0, n) {
      cin >> a[i];
    }
    FOR(i, 0, n) {
      c += a[i];
      mn = min(mn, c);
    }
    cout << c - 2 * mn << "\n";
  }
  
  return 0;
}