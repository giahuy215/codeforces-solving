// https://codeforces.com/problemset/problem/734/B
// B. Anton and Digits
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Recently Anton found a box with digits in his room. There are k2 digits 2, k3 digits 3, k5 digits 5 and k6 digits 6.

// Anton's favorite integers are 32 and 256. He decided to compose this integers from digits he has. 
// He wants to make the sum of these integers as large as possible. Help him solve this task!

// Each digit can be used no more than once, i.e. the composed integers should contain no more than k2 digits 2, k3 digits 3 and so on. 
// Of course, unused digits are not counted in the sum.

// Input
// The only line of the input contains four integers k2, k3, k5 and k6 — the number of digits 2, 3, 5 and 6 respectively (0 ≤ k2, k3, k5, k6 ≤ 5·106).

// Output
// Print one integer — maximum possible sum of Anton's favorite integers that can be composed using digits from the box.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int n = min({ a, c, d});
  if(a - n > 0) {
    cout << 256 * n + min(a - n, b) * 32;
  } else {
    cout << 256 * n;
  }

  return 0;
}