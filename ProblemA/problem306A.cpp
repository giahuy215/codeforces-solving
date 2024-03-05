/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/306/A
  A. Candies
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  
  Polycarpus has got n candies and m friends (n ≥ m). He wants to make a New Year present with candies to each friend. 
  Polycarpus is planning to present all candies and he wants to do this in the fairest (that is, most equal) manner. 
  He wants to choose such ai, where ai is the number of candies in the i-th friend's present, that the maximum ai differs from the least ai as little as possible.

  For example, if n is divisible by m, then he is going to present the same number of candies to all his friends, that is, the maximum ai won't differ from the minimum one.

  Input
  The single line of the input contains a pair of space-separated positive integers n, m (1 ≤ n, m ≤ 100;n ≥ m) — the number of candies and the number of Polycarpus's friends.

  Output
  Print the required sequence a1, a2, ..., am, where ai is the number of candies in the i-th friend's present. 
  All numbers ai must be positive integers, total up to n, the maximum one should differ from the minimum one by the smallest possible value.
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
  int n, m, tb, emp;
  cin >> n >> m;
  tb = n / m;
  emp = n % m;
  FOR(i, 0, m) {
    if(i < m - emp) cout << tb << " ";
    else cout << tb + 1 << " ";
  }

  return 0;
}