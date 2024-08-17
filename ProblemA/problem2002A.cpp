/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 17-08-2024
*/
/*
  https://codeforces.com/problemset/problem/2002/A
  A. Distanced Coloring
  time limit per test: 1 second
  memory limit per test: 256 megabytes

  You received an n×m grid from a mysterious source. The source also gave you a magic positive integer constant k.

  The source told you to color the grid with some colors, satisfying the following condition:

  If (x1,y1), (x2,y2) are two distinct cells with the same color, then max(|x1−x2|,|y1−y2|) ≥ k.
  You don't like using too many colors. Please find the minimum number of colors needed to color the grid.

  Input
  Each test contains multiple test cases. The first line contains the number of test cases t (1 ≤ t ≤ 1000). The description of the test cases follows.

  The only line of each test case consists of three positive integers n, m, k (1 ≤ n,m,k ≤ 10^4) — the dimensions of the grid and the magic constant.

  Output
  For each test case, print a single integer — the minimum number of colors needed to color the grid.
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
    int n, m, k;
    cin >> n >> m >> k;
    cout << min(n, k) * min(m, k) << endl;
  }
  
  return 0;
}