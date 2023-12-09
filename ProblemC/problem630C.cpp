// https://codeforces.com/contest/630/problem/C
// C. Lucky Numbers
// time limit per test: 0.5 seconds
// memory limit per test: 64 megabytes
// input: standard input
// output: standard output

// The numbers of all offices in the new building of the Tax Office of IT City will have lucky numbers.

// Lucky number is a number that consists of digits 7 and 8 only. Find the maximum number of offices in the new building of 
// the Tax Office given that a door-plate can hold a number not longer than n digits.

// Input
// The only line of input contains one integer n (1 ≤ n ≤ 55) — the maximum length of a number that a door-plate can hold.

// Output
// Output one integer — the maximum number of offices, than can have unique lucky numbers not longer than n digits.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (ll i = (a); i < (b); i++)

typedef long long ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll n, ans = 0;
  cin >> n;
  FOR(i, 1, n + 1) {
    ans += pow(2, i);
  }
  cout << ans;
  return 0;
}