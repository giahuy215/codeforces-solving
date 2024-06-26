/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 26-06-2024
*/
/*
  https://codeforces.com/problemset/problem/1985/D
  D. Manhattan Circle
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Given a n by m grid consisting of '.' and '#' characters, there exists a whole manhattan circle on the grid. 
  The top left corner of the grid has coordinates (1,1), and the bottom right corner has coordinates (n,m).

  Point (a,b) belongs to the manhattan circle centered at (h,k) if |h − a| + |k − b| < r, where r is a positive constant.

  On the grid, the set of points that are part of the manhattan circle is marked as '#'. Find the coordinates of the center of the circle.

  Input
  The first line contains t (1 ≤ t ≤ 1000)  — the number of test cases.

  The first line of each test case contains n and m (1 ≤ n⋅m ≤ 2⋅10^5) — the height and width of the grid, respectively.

  The next n lines contains m characters '.' or '#'. If the character is '#', then the point is part of the manhattan circle.

  It is guaranteed the sum of n⋅m over all test cases does not exceed 2⋅10^5, and there is a whole manhattan circle on the grid.

  Output
  For each test case, output the two integers, the coordinates of the center of the circle.
*/
#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while(t--) {
    int n, m, mx = 0, bg = 1e7, cnt = 0, row = 0;
    cin >> n >> m;
    char a[n][m];
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        cin >> a[i][j];
        if(a[i][j] == '#') {
          cnt++;
          if(bg > j) bg = j;
        }
      }
      if(cnt > mx) {
        mx = cnt;
        row = i;
      }
      cnt = 0;
    }
    cout << row + 1 << " " << bg + mx / 2 + 1 << "\n";
  }
  
  return 0;
}