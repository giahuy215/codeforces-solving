/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1922/problem/B
  B. Forming Triangles
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  You have n sticks, numbered from 1 to n. The length of the i-th stick is 2^ai.

  You want to choose exactly 3 sticks out of the given n sticks, and form a non-degenerate triangle out of them, using the sticks as the sides of the triangle. 
  A triangle is called non-degenerate if its area is strictly greater than 0.

  You have to calculate the number of ways to choose exactly 3 sticks so that a triangle can be formed out of them. 
  Note that the order of choosing sticks does not matter (for example, choosing the 1-st, 2-nd and 4-th stick is the same as choosing the 2-nd, 4-th and 1-st stick).

  Input
  The first line contains one integer t (1 ≤ t ≤ 1e4) — the number of test cases.

  Each test case consists of two lines:

  the first line contains one integer n (1 ≤ n ≤ 3⋅1e5);
  the second line contains n integers a1,a2,…,an (0 ≤ ai ≤ n).
  Additional constraint on the input: the sum of n over all test cases does not exceed 3⋅1e5.

  Output
  For each test case, print one integer — the number of ways to choose exactly 3 sticks so that a triangle can be formed out of them.
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
    ll n, cnt1 = 2, cnt2 = 0, sum = 0;
    cin >> n;
    
    int a[n];
    FOR(i, 0, n) {
      cin >> a[i];
    }
    if(n < 3) {
      cout << 0 << endl;
      continue;
    }
    sort(a, a + n, greater<int>());
    FOR(i, 1, n - 1) {
      if(a[i] == a[i - 1]) {
        if(a[i + 1] == a[i]) cnt1++;
        else {
          cnt2 = i + 1;
          sum += cnt1 * (cnt1 - 1) * (cnt1 - 2) / 6 + (cnt1 * (cnt1 - 1)) * (cnt2 != 0 ? n - cnt2: cnt2) / 2;
          cnt1 = 2;
          cnt2 = 0;
        }
      }
    }
    if(cnt1 != 2) sum += cnt1 * (cnt1 - 1) * (cnt1 - 2) / 6;
    cout << sum << endl;
  }
  

  return 0;
}