/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/11/problem/A
  A. Increasing Sequence
  time limit per test: 1 second
  memory limit per test: 64 megabytes
  input: standard input
  output: standard output

  A sequence a0, a1, ..., at - 1 is called increasing if ai - 1 < ai for each i: 0 < i < t.

  You are given a sequence b0, b1, ..., bn - 1 and a positive integer d. In each move you may choose one element of the given sequence and add d to it. 
  What is the least number of moves required to make the given sequence increasing?

  Input
  The first line of the input contains two integer numbers n and d (2 ≤ n ≤ 2000, 1 ≤ d ≤ 1e6). The second line contains space separated sequence b0, b1, ..., bn - 1 (1 ≤ bi ≤ 1e6).

  Output
  Output the minimal number of moves needed to make the sequence increasing.
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
  int n, d, cnt = 0;
  cin >> n >> d;
  int a[n];
  FOR(i, 0, n) {
    cin >> a[i];
  }

  FOR(i, 1, n) {
    if (a[i] <= a[i - 1]) {
      int b = (a[i - 1] - a[i]) / d + 1;
      a[i] += b * d;
      cnt += b;
    }
  }
  cout << cnt;

  return 0;
}