/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/620/A
  A. Professor GukiZ's Robot
  time limit per test: 0.5 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Professor GukiZ makes a new robot. The robot are in the point with coordinates (x1, y1) and should go to the point (x2, y2). 
  In a single step the robot can change any of its coordinates (maybe both of them) by one (decrease or increase). 
  So the robot can move in one of the 8 directions. Find the minimal number of steps the robot should make to get the finish position.

  Input
  The first line contains two integers x1, y1 ( - 1e9 ≤ x1, y1 ≤ 1e9) — the start position of the robot.

  The second line contains two integers x2, y2 ( - 1e9 ≤ x2, y2 ≤ 1e9) — the finish position of the robot.

  Output
  Print the only integer d — the minimal number of steps to get the finish position.
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)
#define all(x) (x).begin(), (x).end()
#define endl "\n"

typedef long long ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  cout << max(abs(x2 - x1), abs(y2 - y1));

  return 0;
}