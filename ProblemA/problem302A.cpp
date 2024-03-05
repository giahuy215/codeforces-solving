/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/302/problem/A
  A. Eugeny and Array
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  Eugeny has array a = a1, a2, ..., an, consisting of n integers. Each integer ai equals to -1, or to 1. Also, he has m queries:

  - Query number i is given as a pair of integers li, ri (1 ≤ li ≤ ri ≤ n).
  - The response to the query will be integer 1, if the elements of array a can be rearranged so as the sum al(i) + al(i + 1) + ... + ar(i) = 0, otherwise the response to the query will be integer 0.
  Help Eugeny, answer all his queries.

  Input
  The first line contains integers n and m (1 ≤ n, m ≤ 2·105). The second line contains n integers a1, a2, ..., an (ai = -1, 1). Next m lines contain Eugene's queries. The i-th line contains integers li, ri (1 ≤ li ≤ ri ≤ n).

  Output
  Print m integers — the responses to Eugene's queries in the order they occur in the input.
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
  int n, m, cnt = 0;
  cin >> n >> m;
  int a[n];
  FOR(i, 0, n) {
    cin >> a[i];
    if(a[i] == 1) cnt++;
  }
  while (m--)
  {
    int x, y;
    cin >> x >> y;
    if((y - x + 1) % 2 == 0 && (y - x + 1) <= min(cnt, n - cnt) * 2) {
      cout << 1 << endl;
    } else {
      cout << 0 << endl;
    }
  }
  

  return 0;
}