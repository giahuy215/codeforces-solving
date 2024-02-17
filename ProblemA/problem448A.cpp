/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/448/A
  A. Rewards
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  
  Bizon the Champion is called the Champion for a reason.

  Bizon the Champion has recently got a present — a new glass cupboard with n shelves and he decided to put all his presents there. 
  All the presents can be divided into two types: medals and cups. Bizon the Champion has a1 first prize cups, a2 second prize cups and a3 third prize cups. 
  Besides, he has b1 first prize medals, b2 second prize medals and b3 third prize medals.

  Naturally, the rewards in the cupboard must look good, that's why Bizon the Champion decided to follow the rules:

  - any shelf cannot contain both cups and medals at the same time;
  - no shelf can contain more than five cups;
  - no shelf can have more than ten medals.
  Help Bizon the Champion find out if we can put all the rewards so that all the conditions are fulfilled.

  Input
  The first line contains integers a1, a2 and a3 (0 ≤ a1, a2, a3 ≤ 100). The second line contains integers b1, b2 and b3 (0 ≤ b1, b2, b3 ≤ 100). 
  The third line contains integer n (1 ≤ n ≤ 100).

  The numbers in the lines are separated by single spaces.

  Output
  Print "YES" (without the quotes) if all the rewards can be put on the shelves in the described manner. Otherwise, print "NO" (without the quotes).
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
  int a1, a2, a3, b1, b2, b3, n, sum = 0;
  cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;
  if(a1 + a2 + a3 > 0) {
    if ((a1 + a2 + a3) % 5 == 0) sum += (a1 + a2 + a3) / 5;
    else sum += (a1 + a2 + a3) / 5 + 1;
  }
  if(b1 + b2 + b3 > 0) {
    if ((b1 + b2 + b3) % 10 == 0) sum += (b1 + b2 + b3) / 10;
    else sum += (b1 + b2 + b3) / 10 + 1;
  }
  if(sum <= n) cout << "YES";
  else cout << "NO";

  return 0;
}