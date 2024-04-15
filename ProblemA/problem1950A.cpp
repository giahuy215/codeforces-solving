/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1950/problem/A
  A. Stair, Peak, or Neither?
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  You are given three digits a, b, and c. Determine whether they form a stair, a peak, or neither.

  - A stair satisfies the condition a < b < c.
  - A peak satisfies the condition a < b > c.
  Input
  The first line contains a single integer t (1 ≤ t ≤ 1000) — the number of test cases.

  The only line of each test case contains three digits a, b, c (0 ≤ a, b, c ≤ 9).

  Output
  For each test case, output "STAIR" if the digits form a stair, "PEAK" if the digits form a peak, and "NONE" otherwise (output the strings without quotes).
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
    int a, b, c;
    cin >> a >> b >> c;
    if(a < b && b < c) cout << "STAIR" << endl;
    else if(a < b && b > c)  cout << "PEAK" << endl;
    else cout << "NONE" << endl;
  }

  return 0;
}