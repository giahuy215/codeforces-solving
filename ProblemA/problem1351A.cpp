/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1351/problem/A
  A. A+B (Trial Problem)
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  You are given two integers a and b. Print a + b.

  Input
  The first line contains an integer t (1 ≤ t ≤ 1e4) — the number of test cases in the input. Then t test cases follow.

  Each test case is given as a line of two integers a and b (−1000 ≤ a,b ≤ 1000).

  Output
  Print t integers — the required numbers a + b.
*/
#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
  }

  return 0;
}