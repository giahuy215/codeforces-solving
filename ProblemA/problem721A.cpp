// https://codeforces.com/problemset/problem/721/A
// A. One-dimensional Japanese Crossword
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Recently Adaltik discovered japanese crosswords. Japanese crossword is a picture, represented as a table sized a × b squares, 
// and each square is colored white or black. There are integers to the left of the rows and to the top of the columns, 
// encrypting the corresponding row or column. The number of integers represents how many groups of black squares there are in corresponding row or column, 
// and the integers themselves represents the number of consecutive black squares in corresponding group 
// (you can find more detailed explanation in Wikipedia https://en.wikipedia.org/wiki/Japanese_crossword).

// Adaltik decided that the general case of japanese crossword is too complicated and drew a row consisting of n squares 
// (e.g. japanese crossword sized 1 × n), which he wants to encrypt in the same way as in japanese crossword.

// https://espresso.codeforces.com/b840890b382a0309019e5ff094fbb84d32df0784.png (image)
// Help Adaltik find the numbers encrypting the row he drew.

// Input
// The first line of the input contains a single integer n (1 ≤ n ≤ 100) — the length of the row. 
// The second line of the input contains a single string consisting of n characters 'B' or 'W', 
// ('B' corresponds to black square, 'W' — to white square in the row that Adaltik drew).

// Output
// The first line should contain a single integer k — the number of integers encrypting the row, 
// e.g. the number of groups of black squares in the row.

// The second line should contain k integers, encrypting the row, 
// e.g. corresponding to sizes of groups of consecutive black squares in the order from left to right.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, b = 0, c = 0;
  string s;
  vector<int> a;
  cin>>n>>s;
  FOR(i,0,n) {
    if(s[i] == 'B') {
      b++;
    } 
    if((s[i] == 'W' || i == n - 1) && b != 0) {
      a.push_back(b);
      c++;
      b = 0;
    }
  }
  if(c != 0) {
    cout<<c<<endl;
  }
  if(a.empty()) {
    cout<<0;
  } else {
    FOR(i,0,a.size()) {
      cout<<a[i]<<" ";
    }
  }
  return 0;
}