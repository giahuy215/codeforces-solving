// https://codeforces.com/problemset/problem/900/A
// A. Find Extra One
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// You have n distinct points on a plane, none of them lie on OY axis. 
// Check that there is a point after removal of which the remaining points are located on one side of the OY axis.

// Input
// The first line contains a single positive integer n (2 ≤ n ≤ 1e5).

// The following n lines contain coordinates of the points. 
// The i-th of these lines contains two single integers xi and yi (|xi|, |yi| ≤ 1e9, xi ≠ 0). No two points coincide.

// Output
// Print "Yes" if there is such a point, "No" — otherwise.

// You can print every letter in any case (upper or lower).
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, pos = 0, nev = 0;
  cin >> n;
  pair<int, int> a[n];
  FOR(i, 0, n) {
    cin >> a[i].first >> a[i].second;
    if(a[i].first > 0) {
      pos++;
    } else {
      nev++;
    }
  }
  if(nev <= 1 || pos <= 1) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}
