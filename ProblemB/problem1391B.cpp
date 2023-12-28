/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1391/B
  B. Fix You
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Consider a conveyor belt represented using a grid consisting of n rows and m columns. 
  The cell in the i-th row from the top and the j-th column from the left is labelled (i,j).

  Every cell, except (n,m), has a direction R (Right) or D (Down) assigned to it. If the cell (i,j) is assigned direction R, 
  any luggage kept on that will move to the cell (i,j+1). Similarly, if the cell (i,j) is assigned direction D, 
  any luggage kept on that will move to the cell (i+1,j). If at any moment, the luggage moves out of the grid, it is considered to be lost.

  There is a counter at the cell (n,m) from where all luggage is picked. 
  A conveyor belt is called functional if and only if any luggage reaches the counter regardless of which cell it is placed in initially. 
  More formally, for every cell (i,j), any luggage placed in this cell should eventually end up in the cell (n,m).
  This may not hold initially; you are, however, allowed to change the directions of some cells to make the conveyor belt functional. 
  Please determine the minimum amount of cells you have to change.
  Please note that it is always possible to make any conveyor belt functional by changing the directions of some set of cells.

  Input
  Each test contains multiple test cases. The first line contains the number of test cases t (1 ≤ t ≤ 10). Description of the test cases follows.
  The first line of each test case contains two integers n,m (1 ≤ n ≤ 100, 1 ≤ m ≤ 100)  — the number of rows and columns, respectively.
  The following n lines each contain m characters. The j-th character in the i-th line, ai,j is the initial direction of the cell (i,j). Please note that a(n,m)= C.

  Output
  For each case, output in a new line the minimum number of cells that you have to change to make the conveyor belt functional.
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int n, m, cnt = 0;
    cin >> n >> m;
    char a[n][m];
    FOR(i, 0, n) {
      FOR(j, 0, m) {
        cin >> a[i][j];
      }
    }
    FOR(i, 0, n) {
      if(a[i][m - 1] == 'R') {
        cnt++;
      }
    }
    FOR(i, 0, m) {
      if(a[n - 1][i] == 'D') {
        cnt++;
      }
    }
    cout << cnt << endl;
  }

  return 0;
}