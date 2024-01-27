/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1886/A
  A. Sum of Three
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Monocarp has an integer n.

  He wants to represent his number as a sum of three distinct positive integers x, y, and z. 
  Additionally, Monocarp wants none of the numbers x, y, and z to be divisible by 3.

  Your task is to help Monocarp to find any valid triplet of distinct positive integers x, y, and z, or report that such a triplet does not exist.

  Input
  The first line contains a single integer t (1 ≤ t ≤ 1e4) — the number of testcases.

  The only line of each testcase contains a single integer n (1 ≤ n ≤ 1e9).

  Output
  For each testcase, if there is no valid triplet x, y, and z, print NO on the first line.

  Otherwise, print YES on the first line. On the second line, print any valid triplet of distinct positive integers x, y, and z such that x+y+z=n, 
  and none of the printed numbers are divisible by 3. If there are multiple valid triplets, you can print any of them.
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
  while (t--)
  {
    int n, cnt = 0;
    cin >> n;
    for (int x = 1; x <= 20; x++) {
      if(cnt != 0) break;
	    for (int y = 1; y <= 20; y++) {
        if(cnt == 0) {
          if (x + y >= n || x == y) continue;
          int z = n - x - y;
          if (z == x || z == y) continue;
          if (x % 3 == 0 || y % 3 == 0 || z % 3 == 0) {
            continue;
          }
          cnt++;
          cout << "YES" << endl;
          cout << x << ' ' << y << ' ' << z << endl;
        } else {
          break;
        }
	    }
	  }
	  if(cnt == 0) cout << "NO" << endl;
  }

  return 0;
}
