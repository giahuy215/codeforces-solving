/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1927/A
  A. Make it White
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  You have a horizontal strip of n cells. Each cell is either white or black.

  You can choose a continuous segment of cells once and paint them all white. After this action, all the black cells in this segment will become white, and the white ones will remain white.

  What is the minimum length of the segment that needs to be painted white in order for all n cells to become white?

  Input
  The first line of the input contains a single integer t (1 ≤ t ≤ 1e4) — the number of test cases. The descriptions of the test cases follow.

  The first line of each test case contains a single integer n (1 ≤ n ≤ 10) — the length of the strip.

  The second line of each test case contains a string s, consisting of n characters, each of which is either 'W' or 'B'. The symbol 'W' denotes a white cell, 
  and 'B' — a black one. It is guaranteed that at least one cell of the given strip is black.

  Output
  For each test case, output a single number — the minimum length of a continuous segment of cells that needs to be painted white in order for the entire strip to become white.
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
    int n, f = 0, l = 0;
    string s;
    cin >> n >> s;
    FOR(i, 0, n) {
      if(s[i] == 'B') {
        f = i;
        break;
      }
    }
    ROF(i, 0, n) {
      if(s[i] == 'B') {
        l = i;
        break;
      }
    }
    cout << l - f + 1 << endl;
  }

  return 0;
}