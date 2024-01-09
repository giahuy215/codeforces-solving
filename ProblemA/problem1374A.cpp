/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1374/problem/A
  A. Required Remainder
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  You are given three integers x,y and n. Your task is to find the maximum integer k such that 0 ≤ k ≤ n that k mod x = y, where mod is modulo operation. 
  Many programming languages use percent operator % to implement it.

  In other words, with given x,y and n you need to find the maximum possible integer from 0 to n that has the remainder y modulo x.

  You have to answer t independent test cases. It is guaranteed that such k exists for each test case.

  Input
  The first line of the input contains one integer t (1 ≤ t ≤ 5⋅1e4) — the number of test cases. The next t lines contain test cases.

  The only line of the test case contains three integers x,y and n (2 ≤ x ≤ 1e9; 0 ≤ y < x; y ≤ n ≤ 1e9).

  It can be shown that such k always exists under the given constraints.

  Output
  For each test case, print the answer — maximum non-negative integer k such that 0 ≤ k ≤ n and k mod x = y. It is guaranteed that the answer always exists.
*/
#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int a, b, n;
    cin >> a >> b >> n;
    if(b == 0 && n < a) cout << 0 << endl;
    else if(n % a == b) cout << n << endl;
    else if(n % a > b) {
      cout << n - (n % a - b) << endl;
    } else {
      cout << n - (n % a - b) - a << endl;
    }
  }

  return 0;
}