/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1915/problem/B
  B. Not Quite Latin Square
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  A Latin square is a 3×3 grid made up of the letters A, B, and C such that:

  - in each row, the letters A, B, and C each appear once, and
  - in each column, the letters A, B, and C each appear once.
  For example, one possible Latin square is shown below.

  ⎡ A C B ⎤
  ⎢ B A C ⎥
  ⎣ C B A ⎦

  You are given a Latin square, but one of the letters was replaced with a question mark ?. Find the letter that was replaced.

  Input
  The first line of the input contains a single integer t (1 ≤ t ≤ 108) — the number of testcases.

  Each test case contains three lines, each consisting of three characters, representing the Latin square. 
  Each character is one of A, B, C, or ?.

  Each test case is a Latin square with exactly one of the letters replaced with a question mark ?.

  Output
  For each test case, output the letter that was replaced.
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
    int a[3]{0};
    char s[3][3];
    for(int i = 0; i < 3; i++) {
      for(int j = 0; j < 3; j++) {
        cin >> s[i][j];
        if(s[i][j] != '?') {
          int b = s[i][j] - 65;
          a[b]++;
        }
      }
    }
    for(int i = 0; i < 3; i++) {
      if(a[i] != 3) {
        cout << char (i + 65) << endl;
        break;
      }
    }
  }

  return 0;
}