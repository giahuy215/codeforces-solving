/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1916/problem/B
  B. Two Divisors
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  A certain number 1≤x≤109 is chosen. You are given two integers a and b, which are the two largest divisors of the number x. 
  At the same time, the condition 1 ≤ a < b < x is satisfied.

  For the given numbers a, b, you need to find the value of x.

  † The number y is a divisor of the number x if there is an integer k such that x = y⋅k.

  Input
  Each test consists of several test cases. The first line contains a single integer t (1 ≤ t ≤ 1e4) — the number of test cases. Then follows the description of the test cases.

  The only line of each test cases contains two integers a, b (1 ≤ a < b ≤ 1e9).

  It is guaranteed that a, b are the two largest divisors for some number 1 ≤ x ≤ 1e9.

  Output
  For each test case, output the number x, such that a and b are the two largest divisors of the number x.

  If there are several answers, print any of them.
*/
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
using namespace std;

ll GCD(ll a, ll b) {
  if(b == 0) return a;
  return GCD(b, a % b);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    ll a, b;
    cin >> a >> b;
    if(b % a == 0) {
      cout << b * (b / a) << endl;
    } else {
      cout << a * b / GCD(a, b) << endl;
    }
  }

  return 0;
}