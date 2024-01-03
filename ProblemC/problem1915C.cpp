/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1915/C
  C. Can I Square?
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Calin has n buckets, the i-th of which contains ai wooden squares of side length 1.

  Can Calin build a square using all the given squares?

  Input
  The first line contains a single integer t (1 ≤ t ≤ 1e4) — the number of test cases.

  The first line of each test case contains a single integer n (1 ≤ n ≤ 2⋅1e5) — the number of buckets.

  The second line of each test case contains n integers a1,…,an (1 ≤ ai ≤ 1e9) — the number of squares in each bucket.

  The sum of n over all test cases does not exceed 2⋅1e5.

  Output
  For each test case, output "YES" if Calin can build a square using all of the given 1×1 squares, and "NO" otherwise.

  You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).
*/
#include <bits/stdc++.h>

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
    int n;
    ll sum = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
      cin >> a[i];
      sum += a[i];
    }
    if(sqrt(sum) == (int) sqrt(sum)) {
      cout << "YES" << "\n";
    } else {
      cout << "NO" << "\n";
    }
  }

  return 0;
}