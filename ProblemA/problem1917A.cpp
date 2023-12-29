/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1917/problem/A
  A. Least Product
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  You are given an array of integers a1,a2,…,an. You can perform the following operation any number of times (possibly zero):

  Choose any element ai from the array and change its value to any integer between 0 and ai (inclusive). 
  More formally, if ai < 0, replace ai with any integer in [ai, 0], otherwise replace ai with any integer in [0, ai].
  Let r be the minimum possible product of all the ai after performing the operation any number of times.

  Find the minimum number of operations required to make the product equal to r. Also, print one such shortest sequence of operations. 
  If there are multiple answers, you can print any of them.

  Input
  Each test consists of multiple test cases. The first line contains a single integer t (1 ≤ t ≤ 500) - the number of test cases. 
  This is followed by their description.

  The first line of each test case contains the a single integer n (1 ≤ n ≤ 100) — the length of the array.

  The second line of each test case contains n integers a1,a2,…,an (−1e9 ≤ ai ≤ 1e9).

  Output
  For each test case:

  The first line must contain the minimum number of operations k (0 ≤ k ≤ n).
  The j-th of the next k lines must contain two integers i and x, which represent the j-th operation. That operation consists in replacing ai with x.
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int n, cnt = 0, zero = 0;
    cin >> n;
    int a[n];
    FOR(i, 0, n) {
      cin >> a[i];
      if(a[i] < 0) {
        cnt++;
      }
      if(a[i] == 0) {
        zero++;
      }
    }
    if(cnt % 2 == 1) {
      cout << 0 << "\n";
    } else if(cnt % 2 == 0 && zero == 0) {
      cout << 1 << "\n";
      cout << 1 << " " << 0 << "\n";
    } else {
      cout << 0 << "\n";
    }
  }

  return 0;
}