// https://codeforces.com/problemset/problem/266/A
// A. Stones on the Table
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output

// There are n stones on the table in a row, each of them can be red, green or blue. 
// Count the minimum number of stones to take from the table so that any two neighboring stones had different colors. 
// Stones in a row are considered neighboring if there are no other stones between them.

// Input
// The first line contains integer n (1 ≤ n ≤ 50) — the number of stones on the table.

// The next line contains string s, which represents the colors of the stones. 
// We'll consider the stones in the row numbered from 1 to n from left to right. 
// Then the i-th character s equals "R", if the i-th stone is red, "G", if it's green and "B", if it's blue.

// Output
// Print a single integer — the answer to the problem.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, cnt = 0;
  string s;
  cin >> n >> s;
  FOR(i, 1, n) {
    if(s[i] == s[i - 1]) {
      cnt++;
    }
  }
  cout << cnt;
  return 0;
}