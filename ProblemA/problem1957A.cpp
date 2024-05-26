/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1957/A
  A. Stickogon
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  
  You are given n sticks of lengths a1,a2,…,an. Find the maximum number of regular (equal-sided) polygons you can construct simultaneously, such that:

  - Each side of a polygon is formed by exactly one stick.
  - No stick is used in more than 1 polygon.
  Note: Sticks cannot be broken.

  Input
  The first line contains a single integer t (1 ≤ t ≤ 100) — the number of test cases.

  The first line of each test case contains a single integer n (1 ≤ n ≤ 100) — the number of sticks available.

  The second line of each test case contains n integers a1,a2,…,an (1 ≤ ai ≤ 100) — the stick lengths.

  Output
  For each test case, output a single integer on a new line — the maximum number of regular (equal-sided) polygons you can make simultaneously from the sticks available.
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
  while(t--) {
    int n, cnt = 0;
    cin >> n;
    int a[n], b[101] {0};
    FOR(i, 0, n) {
      cin >> a[i];
      b[a[i]]++;
    }

    FOR(i, 0, 101) {
      cnt += b[i] / 3;
    }

    cout << cnt << endl;
  }
  
  return 0;
}