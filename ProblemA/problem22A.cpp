/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/22/A
  A. Second Order Statistics
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Once Bob needed to find the second order statistics of a sequence of integer numbers. 
  Lets choose each number from the sequence exactly once and sort them. 
  The value on the second position is the second order statistics of the given sequence. 
  In other words it is the smallest element strictly greater than the minimum. Help Bob solve this problem.

  Input
  The first input line contains integer n (1 ≤ n ≤ 100) — amount of numbers in the sequence. 
  The second line contains n space-separated integer numbers — elements of the sequence. These numbers don't exceed 100 in absolute value.

  Output
  If the given sequence has the second order statistics, output this order statistics, otherwise output NO.
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, cnt = 0;
  cin >> n;
  int a[n];
  FOR(i, 0, n) {
    cin >> a[i];
  }
  sort(a, a + n);
  FOR(i, 1, n) {
    if(a[i] != a[i - 1]) {
      cout << a[i];
      cnt++;
      break;
    }
  }
  if(cnt == 0) cout << "NO";

  return 0;
}