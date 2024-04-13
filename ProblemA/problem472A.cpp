/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/472/A
  A. Design Tutorial: Learn from Math
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  One way to create a task is to learn from math. You can generate some random math statement or modify some theorems to get something new and build a new task from that.

  For example, there is a statement called the "Goldbach's conjecture". It says: "each even number no less than four can be expressed as the sum of two primes". 
  Let's modify it. How about a statement like that: "each integer no less than 12 can be expressed as the sum of two composite numbers." Not like the Goldbach's conjecture, I can prove this theorem.

  You are given an integer n no less than 12, express it as a sum of two composite numbers.

  Input
  The only line contains an integer n (12 ≤ n ≤ 1e6).

  Output
  Output two composite integers x and y (1 < x, y < n) such that x + y = n. If there are multiple solutions, you can output any of them.
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
  int n;
  cin >> n;
  if(n % 2 == 0) {
    cout << 6 << " " << n - 6;
  } else cout << 9 << " " << n - 9;

  return 0;
}