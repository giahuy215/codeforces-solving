/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1873/problem/E
  E. Building an Aquarium
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  You love fish, that's why you have decided to build an aquarium. You have a piece of coral made of n columns, 
  the i-th of which is ai units tall. Afterwards, you will build a tank around the coral as follows:

  - Pick an integer h ≥ 1 — the height of the tank. Build walls of height h on either side of the tank.
  - Then, fill the tank up with water so that the height of each column is h, unless the coral is taller than h; then no water should be added to this column.
  For example, with a=[3,1,2,4,6,2,5] and a height of h=4, you will end up using a total of w=8 units of water, as shown.
  https://espresso.codeforces.com/5a69329b8d22a26c9f4de9eb96076db3e8c712ba.png (image)
  You can use at most x units of water to fill up the tank, but you want to build the biggest tank possible. What is the largest value of h you can select?
  Input
  The first line contains a single integer t (1 ≤ t ≤ 1e4) — the number of test cases.
  The first line of each test case contains two positive integers n and x (1 ≤ n ≤ 2⋅1e5; 1 ≤ x ≤ 1e9) — the number of columns of the coral and the maximum amount of water you can use.
  The second line of each test case contains n space-separated integers ai (1 ≤ ai ≤ 1e9) — the heights of the coral.

  The sum of n over all test cases doesn't exceed 2⋅1e5.

  Output
  For each test case, output a single positive integer h (h ≥ 1) — the maximum height the tank can have, so you need at most x units of water to fill up the tank.
  We have a proof that under these constraints, such a value of h always exists.
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;
typedef long long ll;
ll ans = 0;
ll bns(ll l, ll r, ll a[], ll x, ll n) {
  if(l > r) return 0;
  ll m = (l + r) / 2, sum = 0;
  FOR(i, 0, n) {
    if(m > a[i]) {
      sum += m - a[i];
    }
  }
  if(sum > x) {
    return bns(l, m - 1, a, x, n);
  } else if(sum == x) {
    ans = m;
    return m;
  } else {
    ans = m;
    return bns(m + 1, r, a, x, n);
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    ll n, x;
    cin >> n >> x;
    ll a[n];
    FOR(i, 0, n) {
      cin >> a[i];
    }
    if(n == 1) {
      cout << a[0] + x << "\n";
    } else {
      sort(a, a + n);
      bns(0, x + a[n - 1], a, x, n);
      cout << ans << "\n";
    }
  }

  return 0;
}