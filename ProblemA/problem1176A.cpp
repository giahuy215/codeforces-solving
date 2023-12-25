/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1176/A
  A. Divide it!
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  You are given an integer n.
  You can perform any of the following operations with this number an arbitrary (possibly, zero) number of times:

  - Replace n with n/2 if n is divisible by 2;
  - Replace n with 2n/3 if n is divisible by 3;
  - Replace n with 4n/5 if n is divisible by 5.
  For example, you can replace 30 with 15 using the first operation, with 20 using the second operation or with 24 using the third operation.

  Your task is to find the minimum number of moves required to obtain 1 from n or say that it is impossible to do it.

  You have to answer q independent queries.

  Input
  The first line of the input contains one integer q (1 ≤ q ≤ 1000) — the number of queries.

  The next q lines contain the queries. For each query you are given the integer number n (1 ≤ n ≤ 1e18).

  Output
  Print the answer for each query on a new line. If it is impossible to obtain 1 from n, print -1. Otherwise, print the minimum number of moves required to do it.
*/
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll t;
  cin >> t;
  while (t--)
  {
    ll n, cnt = 0;
    cin >> n;
    while (n > 1)
    {
      if(n % 2 == 0) {
        n /= 2;
        cnt++;
      } else if(n % 3 == 0) {
        n = 2 * n / 3;
        cnt++;
      } else if(n % 5 == 0) {
        n = 4 * n / 5;
        cnt++;
      } else {
        break;
      }
    }
    if(n == 1) cout << cnt << "\n";
    else cout << -1 << "\n";
  }

  return 0;
}