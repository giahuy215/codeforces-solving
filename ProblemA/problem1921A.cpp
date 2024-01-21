/*
  Author : Nguyen Duc Gia Huy
*/
/*
  A. Square
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  A square of positive (strictly greater than 0) area is located on the coordinate plane, with sides parallel to the coordinate axes. 
  You are given the coordinates of its corners, in random order. Your task is to find the area of the square.

  Input
  Each test consists of several testcases. The first line contains one integer t (1 ≤ t ≤ 100) — the number of testcases. 
  The following is a description of the testcases.

  Each testcase contains four lines, each line contains two integers xi,yi (−1000 ≤ xi,yi ≤ 1000), coordinates of the corners of the square.

  It is guaranteed that there is a square with sides parallel to the coordinate axes, with positive (strictly greater than 0) area, with corners in given points.

  Output
  For each test case, print a single integer, the area of the square.
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define endl "\n"

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    pair<int, int> a[4];
    FOR(i, 0, 4) {
      cin >> a[i].first >> a[i].second;
    }
    FOR(i, 1, 4) {
      if(a[i].second != a[i - 1].second) {
        cout << abs(a[i].second - a[i - 1].second) * abs(a[i].second - a[i - 1].second) << endl;
        break;
      }
    }
  }

  return 0;
}