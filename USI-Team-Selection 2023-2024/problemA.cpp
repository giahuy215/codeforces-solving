/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/gym/104886/problem/A
  A. Schedule Problem
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  There are n SWERC candidates in USI and we are going to hold a contest for them. Each of the candidates has a consecutive free period to do the contest. 
  For the i-th candidate, he/she is available from the li-th slot to ri-th slot. The question is, is there a slot that everyone is free so we can do the contest at that time?

  Input
  The first line contains an integer T(1 ≤ T ≤ 1e3) — the number of test cases. The description of the test cases follows.
  For each test case, the first line contains an integer n(1 ≤ n ≤ 1e3) — the number of candidates.
  The next n lines contains two integers li,ri(1 ≤ li ≤ ri ≤ 1e3) — the free time period of i-th candidate.
  It is guaranteed that ∑n≤1e3 for all test cases.

  Output
  For each test case, print "YES"(without quotes) in a line if there is at least one slot in which every candidate is available. 
  Otherwise, print "NO"(without quotes) in a line.

  You can output "YES" and "NO" in any case (for example, strings "yES", "yes" and "Yes" will be recognized as a positive response).
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int n, min = 1e4, max = 0;
    cin >> n;
    FOR(i, 0, n) {
      int a, b;
      cin >> a >> b;
      if(a > max) max = a;
      if(b < min) min = b;
    }
    if(min < max) cout << "NO" << "\n";
    else cout << "YES" << "\n";
  }

  return 0;
}