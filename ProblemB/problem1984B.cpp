/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1984/B
  B. Large Addition
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  A digit is large if it is between 5 and 9, inclusive. A positive integer is large if all of its digits are large.

  You are given an integer x. Can it be the sum of two large positive integers with the same number of digits?

  Input
  The first line contains a single integer t (1 ≤ t ≤ 10^4) — the number of test cases.

  The only line of each test case contains a single integer x (10 ≤ x ≤ 10^18).

  Output
  For each test case, output YES if x satisfies the condition, and NO otherwise.

  You can output YES and NO in any case (for example, strings yES, yes, and Yes will be recognized as a positive response).
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
  while(t--) {
    ll x;
    bool ok = true;
    cin >> x;
    x = x - x % 10 + (x % 10 + 1) % 10;
    while (x > 9) {
      if (x % 10 == 0) {
        cout << "NO\n";
        ok = false;
        break;
      }
      x /= 10;
    }
    if(ok) cout << (x == 1 ? "YES\n" : "NO\n");
  }
  
  return 0;
}