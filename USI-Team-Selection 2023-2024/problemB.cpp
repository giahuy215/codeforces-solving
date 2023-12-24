/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/gym/104886/problem/B
  B. Easy Geometry
  time limit per test: 2.0 s
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Boboge is currently at (x1, y1)(y1 > 0), there is a river at y=0, and his destination is at (x2, y2)(y2 > 0). 
  He needs to get some water from the river first, then go to the destination. What's the minimum distance he has to travel?

  https://espresso.codeforces.com/12bfb04f70b4e6534c902216d047665dc4f8ed7d.png (image)
  Input
  The first line contains an integer T(1≤T≤105) — the number of test cases. The description of the test cases follows.
  The only line of each test case consists of 4 integers: x1,y1,x2,y2(−1e9 ≤ x1, x2 ≤ 1e9, 0 < y1, y2 ≤ 1e9) — the positions.

  Output
  For each test case, print the minimum distance.

  Your answer is considered correct if its absolute or relative error does not exceed 10−6.

  Formally, let your answer be x, and the jury's answer be y. Your answer is accepted if and only if |x−y| / max(1,|y|) ≤1e−6.
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
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double n = abs(x1 - x2);
    cout << setprecision(7) << fixed << sqrt((y2 + y1) * (y2 + y1) + n * n) << endl;
  }

  return 0;
}