/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1985/problem/B
  B. Maximum Multiple Sum
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Given an integer n, find an integer x such that:
  - 2 ≤ x ≤ n.
  - The sum of multiples of x that are less than or equal to n is maximized. Formally, x+2x+3x+⋯+kx where kx ≤ n is maximized over all possible values of x.
  
  Input
  The first line contains t (1 ≤ t ≤ 100) — the number of test cases.

  Each test case contains a single integer n (2 ≤ n ≤ 100).

  Output
  For each test case, output an integer, the optimal value of x. It can be shown there is only one unique answer.
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while(t--) {
    int x;
    cin >> x;
    if(x == 3) cout << 3 << "\n";
    else cout << 2 << "\n";
  }
  
  return 0;
}