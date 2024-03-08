/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/486/A
  A. Calculating Function
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  
  For a positive integer n let's define a function f:

  f(n) =  - 1 + 2 - 3 + .. + ( - 1)^n * n

  Your task is to calculate f(n) for a given integer n.

  Input
  The single line contains the positive integer n (1 ≤ n ≤ 10^15).

  Output
  Print f(n) in a single line.
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
  ll n;
  cin >> n;
  if(n % 2 == 0) cout << (n + 1) / 2;
  else cout << - (n + 1) / 2;

  return 0;
}