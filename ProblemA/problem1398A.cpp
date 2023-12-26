/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1398/problem/A
  A. Bad Triangle
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  You are given an array a1,a2,…,an, which is sorted in non-decreasing order (ai ≤ ai + 1).

  Find three indices i, j, k such that 1 ≤ i < j < k ≤ n and it is impossible to construct a non-degenerate triangle (a triangle with nonzero area) 
  having sides equal to ai, aj and ak (for example it is possible to construct a non-degenerate triangle with sides 3, 4 and 5 but impossible with sides 3, 4 and 7). 
  If it is impossible to find such triple, report it.

  Input
  The first line contains one integer t (1 ≤ t ≤ 1000) — the number of test cases.
  The first line of each test case contains one integer n (3 ≤ n ≤ 5⋅1e4) — the length of the array a.
  The second line of each test case contains n integers a1,a2,…,an (1 ≤ ai ≤ 1e9; ai − 1 ≤ ai) — the array a.
  It is guaranteed that the sum of n over all test cases does not exceed 1e5.

  Output
  For each test case print the answer to it in one line.

  If there is a triple of indices i, j, k (i < j < k) such that it is impossible to construct a non-degenerate triangle having sides 
  equal to ai, aj and ak, print that three indices in ascending order. If there are multiple answers, print any of them.

  Otherwise, print -1.
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
    int n;
    cin >> n;
    int a[n];
    FOR(i, 0, n) {
      cin >> a[i];
    }
    if(a[0] + a[1] <= a[n - 1]) cout << 1 << " " << 2 << " " << n << "\n";
    else {
      cout << -1 << "\n";
    }
  }

  return 0;
}