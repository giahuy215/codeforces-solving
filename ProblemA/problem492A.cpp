/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/492/A
  A. Vanya and Cubes
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Vanya got n cubes. He decided to build a pyramid from them. 
  Vanya wants to build the pyramid as follows: the top level of the pyramid must consist of 1 cube, the second level must consist of 1 + 2 = 3 cubes, the third level must have 1 + 2 + 3 = 6 cubes, and so on. 
  Thus, the i-th level of the pyramid must have 1 + 2 + ... + (i - 1) + i cubes.

  Vanya wants to know what is the maximum height of the pyramid that he can make using the given cubes.

  Input
  The first line contains integer n (1 ≤ n ≤ 1e4) — the number of cubes given to Vanya.

  Output
  Print the maximum possible height of the pyramid in the single line.
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
  int n, i = 1, j = 1, cnt = 0;
  cin >> n;
  while (n > 0) {
    n -= j;
    if(n < 0) break;
    cnt++;
    i++;
    j += i;
  }
  cout << cnt;

  return 0;
}