/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1931/problem/D
  D. Divisible Pairs
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Polycarp has two favorite integers x and y (they can be equal), and he has found an array a of length n.

  Polycarp considers a pair of indices ⟨i,j⟩ (1 ≤ i < j ≤ n) beautiful if:

  - ai + aj is divisible by x;
  - ai − aj is divisible by y.
  For example, if x=5, y=2, n=6, a=[1,2,7,4,9,6], then the only beautiful pairs are:

  - ⟨1,5⟩: a1+a5=1+9=10 (10 is divisible by 5) and a1 − a5 = 1 − 9 = −8 (−8 is divisible by 2);
  - ⟨4,6⟩: a4+a6=4+6=10 (10 is divisible by 5) and a4 − a6 = 4 − 6 = −2 (−2 is divisible by 2).
  Find the number of beautiful pairs in the array a.
  Input
  The first line of the input contains a single integer t (1≤t≤1e4) — the number of test cases. Then the descriptions of the test cases follow.

  The first line of each test case contains three integers n, x, and y (2 ≤ n ≤ 2⋅1e5, 1 ≤ x,y ≤ 1e9) — the size of the array and Polycarp's favorite integers.

  The second line of each test case contains n integers a1,a2,…,an (1 ≤ ai ≤ 1e9) — the elements of the array.

  It is guaranteed that the sum of n over all test cases does not exceed 2⋅1e5.

  Output
  For each test case, output a single integer — the number of beautiful pairs in the array a.
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
    int n, x, y, num;
    cin >> n >> x >> y;
    map<pair<int, int>, int> mp;
    ll ans = 0;
    FOR(i, 0, n) {
      cin >> num;
      int a = num % x, b = num % y;
      ans += mp[{a, b}];
      mp[{(x - a) % x, b}]++;
    }
    cout << ans << endl;
  }

  return 0;
}