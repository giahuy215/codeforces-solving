/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1873/problem/D
  D. 1D Eraser
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  You are given a strip of paper s that is n cells long. Each cell is either black or white. 
  In an operation you can take any k consecutive cells and make them all white.
  Find the minimum number of operations needed to remove all black cells.

  Input
  The first line contains a single integer t (1 ≤ t ≤ 1000) — the number of test cases.
  The first line of each test case contains two integers n and k (1 ≤ k ≤ n ≤ 2⋅1e5) — the length of the paper and the integer used in the operation.
  The second line of each test case contains a string s of length n consisting of characters B (representing a black cell) or W (representing a white cell).
  The sum of n over all test cases does not exceed 2⋅1e5.

  Output
  For each test case, output a single integer — the minimum number of operations needed to remove all black cells.
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int n, k, cnt = 0;
    string s;
    cin >> n >> k >> s;
    for(int i = 0; i < s.size(); i++) {
      if(s[i] == 'B') {
        cnt++;
        i += k - 1;
      }
    }
    cout << cnt << "\n";
  }

  return 0;
}