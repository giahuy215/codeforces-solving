/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1154/problem/A
  A. Restoring Three Numbers
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Polycarp has guessed three positive integers a, b and c. He keeps these numbers in secret, but he writes down four numbers on a board 
  in arbitrary order — their pairwise sums (three numbers) and sum of all three numbers (one number). 
  So, there are four numbers on a board in random order: a+b, a+c, b+c and a+b+c.

  You have to guess three numbers a, b and c using given numbers. Print three guessed integers in any order.

  Pay attention that some given numbers a, b and c can be equal (it is also possible that a=b=c).

  Input
  The only line of the input contains four positive integers x1,x2,x3,x4 (2 ≤ xi ≤ 1e9) — numbers written on a board in random order. 
  It is guaranteed that the answer exists for the given number x1,x2,x3,x4.

  Output
  Print such positive integers a, b and c that four numbers written on a board are values a+b, a+c, b+c and a+b+c written in some order. 
  Print a, b and c in any order. If there are several answers, you can print any. It is guaranteed that the answer exists.
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int a, b, c, d, mx;
  cin >> a >> b >> c >> d;
  mx = max({a, b, c, d});
  if(mx != a) cout << mx - a << " ";
  if(mx != b) cout << mx - b << " ";
  if(mx != c) cout << mx - c << " ";
  if(mx != d) cout << mx - d << " ";
  return 0;
}