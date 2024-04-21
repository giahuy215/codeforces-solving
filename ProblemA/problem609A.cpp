/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/609/problem/A
  A. USB Flash Drives
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Sean is trying to save a large file to a USB flash drive. He has n USB flash drives with capacities equal to a1, a2, ..., an megabytes. 
  The file size is equal to m megabytes.

  Find the minimum number of USB flash drives needed to write Sean's file, if he can split the file between drives.

  Input
  The first line contains positive integer n (1 ≤ n ≤ 100) — the number of USB flash drives.

  The second line contains positive integer m (1 ≤ m ≤ 1e5) — the size of Sean's file.

  Each of the next n lines contains positive integer ai (1 ≤ ai ≤ 1000) — the sizes of USB flash drives in megabytes.

  It is guaranteed that the answer exists, i. e. the sum of all ai is not less than m.

  Output
  Print the minimum number of USB flash drives to write Sean's file, if he can split the file between drives.
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
  int n, m;
  cin >> n >> m;
  int a[n];
  FOR(i, 0, n) {
    cin >> a[i];
  }
  sort(a, a + n);
  int i = n - 1;
  while (m > 0)
  {
    m -= a[i];
    i--;
  }
  cout << n - i - 1;

  return 0;
}