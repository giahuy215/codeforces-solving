/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1974/C
  C. Beautiful Triple Pairs
  time limit per test: 4 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Polycarp was given an array a of n integers. He really likes triples of numbers, so for each j (1 ≤ j ≤ n−2) he wrote down a triple of elements [aj,aj+1,aj+2].

  Polycarp considers a pair of triples b and c beautiful if they differ in exactly one position, that is, one of the following conditions is satisfied:

  - b1 ≠ c1 and b2 = c2 and b3 = c3;
  - b1 = c1 and b2 ≠ c2 and b3 = c3;
  - b1 = c1 and b2 = c2 and b3 ≠ c3.
  Find the number of beautiful pairs of triples among the written triples [aj,aj+1,aj+2].

  Input
  The first line contains a single integer t (1 ≤ t ≤ 10^4) — the number of test cases.

  The first line of each test case contains a single integer n (3 ≤ n ≤ 2⋅10^5) — the length of the array a.

  The second line of each test case contains n integers a1,a2,…,an (1 ≤ ai ≤ 10^6) — the elements of the array.

  It is guaranteed that the sum of the values of n for all test cases in the test does not exceed 2⋅10^5.

  Output
  For each test case, output a single integer — the number of beautiful pairs of triples among the pairs of the form [aj,aj+1,aj+2].

  Note that the answer may not fit into 32-bit data types.
*/

#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)
#define all(x) (x).begin(), (x).end()
#define endl "\n"
typedef long long ll;

using namespace std;

struct triplesNumber
{
  ll x;
  ll y;
  ll z;
  friend bool operator<(const triplesNumber& lhs, const triplesNumber& rhs) {
    return tie(lhs.x, lhs.y, lhs.z) < tie(rhs.x, rhs.y, rhs.z);
  }
  friend bool operator==(const triplesNumber& lhs, const triplesNumber& rhs) {
    return tie(lhs.x, lhs.y, lhs.z) == tie(rhs.x, rhs.y, rhs.z);
  }
};

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while(t--) {
    ll n, cnt = 0, cnt1 = 0;
    cin >> n;
    ll a[n], j = 0;
    map<triplesNumber, ll> mp;
    FOR(i, 0, n) cin >> a[i];

    FOR(i, 0, n) {
      if(i > 0 && i < n - 1) { 
        cnt += mp[{0, a[i], a[i + 1]}]++;
        cnt += mp[{a[i - 1], 0, a[i + 1]}]++;
        cnt += mp[{a[i - 1], a[i], 0}]++;
        cnt -= 3 * mp[{a[i - 1], a[i], a[i + 1]}]++;
        j++;
      }
    }

    cout << cnt << endl;
  }
  
  return 0;
}