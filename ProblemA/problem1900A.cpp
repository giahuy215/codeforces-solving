// https://codeforces.com/problemset/problem/1900/A
// A. Cover in Water
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Filip has a row of cells, some of which are blocked, and some are empty. He wants all empty cells to have water in them. 
// He has two actions at his disposal:

// 1 — place water in an empty cell.
// 2 — remove water from a cell and place it in any other empty cell.

// If at some moment cell i (2 ≤ i ≤ n−1) is empty and both cells i−1 and i+1 contains water, then it becomes filled with water.

// Find the minimum number of times he needs to perform action 1 in order to fill all empty cells with water.

// Note that you don't need to minimize the use of action 2. Note that blocked cells neither contain water nor can Filip place water in them.

// Input
// Each test contains multiple test cases. The first line contains the number of test cases t (1 ≤ t ≤ 100). 
// The description of the test cases follows.

// The first line of each test case contains a single integer n (1 ≤ n ≤ 100) — the number of cells.

// The next line contains a string s of length n. The i-th character of s is '.' if the cell i is empty and '#' if cell i is blocked.

// Output
// For each test case, output a single number — the minimal amount of actions 1 needed to fill all empty cells with water.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n, cnt = 0, mx = 0, sum = 0;
    string s;
    cin >> n >> s;
    FOR(i,0,n) {
      if(s[i] == '.') {
        cnt++;
        sum++;
      } else {
        mx = max(mx, cnt);
        cnt = 0;
      }
    }
    mx = max(mx, cnt);
    if(mx == 0) {
      cout << 0 << "\n";
    } else if(mx >= 3) {
      cout << 2 << "\n";
    } else {
      cout << sum << "\n";
    }
  }
  
  return 0;
}