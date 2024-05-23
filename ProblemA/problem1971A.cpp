/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1971/problem/A
  A. My First Sorting Problem
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  You are given two integers x and y.

  Output two integers: the minimum of x and y, followed by the maximum of x and y.

  Input
  The first line contains a single integer t (1 ≤ t ≤ 100) — the number of test cases.

  The only line of each test case contains two space-separated integers x and y (0 ≤ x,y ≤ 9).

  Output
  For each test case, output two integers: the minimum of x and y, followed by the maximum of x and y.
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
  int t; 
  cin >> t;
  while (t--) {
    int x, y;
    cin >> x >> y;
    cout << min(x, y) << " " << max(x, y) << endl;
  } 
  
  return 0;
}