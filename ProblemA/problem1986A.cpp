/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 29-06-2024
*/
/*
  https://codeforces.com/problemset/problem/1986/A
  A. X Axis
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  You are given three points with integer coordinates x1, x2, and x3 on the X axis (1 ≤ xi ≤ 10). 
  You can choose any point with an integer coordinate a on the X axis. Note that the point a may coincide with x1, x2, or x3. 
  Let f(a) be the total distance from the given points to the point a. Find the smallest value of f(a).

  The distance between points a and b is equal to |a−b|. For example, the distance between points a = 5 and b = 2 is 3.

  Input
  Each test consists of multiple test cases. The first line contains a single integer t (1 ≤ t ≤ 10^3) — the number of test cases. Then follows their descriptions.

  The single line of each test case contains three integers x1, x2, and x3 (1 ≤ xi ≤ 10) — the coordinates of the points.

  Output
  For each test case, output the smallest value of f(a).
*/
#include<iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while(t--) {
    int a, b, c, ans = 1e5;
    cin >> a >> b >> c;
    for(int i = 1; i <= 10; i++) {
      ans = min(ans, abs(a - i) + abs(b - i) + abs(c - i));
    }
    cout << ans << "\n";
  }
}