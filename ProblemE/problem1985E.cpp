/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 28-06-2024
*/
/*
  https://codeforces.com/problemset/problem/1985/E
  E. Secret Box
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Ntarsis has a box B with side lengths x, y, and z. It lies in the 3D coordinate plane, extending from (0,0,0) to (x,y,z).

  Ntarsis has a secret box S. He wants to choose its dimensions such that all side lengths are positive integers, and the volume of S is k. 
  He can place S somewhere within B such that:

  - S is parallel to all axes.
  - every corner of S lies on an integer coordinate.
  S is magical, so when placed at an integer location inside B, it will not fall to the ground.

  Among all possible ways to choose the dimensions of S, determine the maximum number of distinct locations he can choose to place his secret box S inside B. 
  Ntarsis does not rotate S once its side lengths are selected.

  Input
  The first line consists of an integer t, the number of test cases (1 ≤ t ≤ 2000). The description of the test cases follows.

  The first and only line of each test case contains four integers x,y,z and k (1 ≤ x,y,z ≤ 2000, 1 ≤ k ≤ x⋅y⋅z).

  It is guaranteed the sum of all x, sum of all y, and sum of all z do not exceed 2000 over all test cases.

  Note that k may not fit in a standard 32-bit integer data type.

  Output
  For each test case, output the answer as an integer on a new line. If there is no way to select the dimensions of S so it fits in B, output 0.
*/
#include <bits/stdc++.h>
typedef long long ll;
#define FOR(i, a, b) for (ll i = (a); i < (b); i++)
#define ROF(i, a, b) for (ll i = (b-1); i >= (a); i--)
#define all(x) (x).begin(), (x).end()
#define endl "\n"

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while(t--) {
    ll x, y, z, k, ans = 0;
    cin >> x >> y >> z >> k;
    FOR(i, 1, x + 1) {
      FOR(j, 1, y + 1) {
        if(k % (i * j)) continue;
        ll l = k / (i * j);
        if(l > z) continue;
        ll cnt = (ll) (x - i + 1) * (y - j + 1) * (z - l + 1);
        ans = max(ans, cnt);
      }
    }
    cout << ans << endl;
  }
  
  return 0;
}