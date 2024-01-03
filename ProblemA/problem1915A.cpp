/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1915/A
  A. Odd One Out
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  You are given three digits a, b, c. Two of them are equal, but the third one is different from the other two.

  Find the value that occurs exactly once.

  Input
  The first line contains a single integer t (1 ≤ t ≤ 270) — the number of test cases.
  The only line of each test case contains three digits a, b, c (0 ≤ a, b, c ≤ 9). 
  Two of the digits are equal, but the third one is different from the other two.

  Output
  For each test case, output the value that occurs exactly once.
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
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a ^ b ^ c) << endl;
  }

  return 0;
}