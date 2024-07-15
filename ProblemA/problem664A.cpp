/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 16-07-2024
*/
/*
  https://codeforces.com/contest/664/problem/A
  A. Complicated GCD
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  Greatest common divisor GCD(a, b) of two positive integers a and b is equal to the biggest integer d such that both integers a and b are divisible by d. 
  There are many efficient algorithms to find greatest common divisor GCD(a, b), for example, Euclid algorithm.

  Formally, find the biggest integer d, such that all integers a, a + 1, a + 2, ..., b are divisible by d. 
  To make the problem even more complicated we allow a and b to be up to googol, 10^100 — such number do not fit even in 64-bit integer type!

  Input
  The only line of the input contains two integers a and b (1 ≤ a ≤ b ≤ 10^100).

  Output
  Output one integer — greatest common divisor of all integers from a to b inclusive.
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  string a, b;
  cin >> a >> b;
  if(a == b) cout << a;
  else cout << 1;
  
  return 0;
}