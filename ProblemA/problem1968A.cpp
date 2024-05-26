/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1968/A
  A. Maximize?
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  You are given an integer x. Your task is to find any integer y (1 ≤ y < x) such that gcd(x,y) + y is maximum possible.

  Note that if there is more than one y which satisfies the statement, you are allowed to find any.

  gcd(a,b) is the Greatest Common Divisor of a and b. For example, gcd(6,4)=2.

  Input
  The first line contains a single integer t (1 ≤ t ≤ 1000) — the number of test cases.

  Each of the following t lines contains a single integer x (2 ≤ x ≤ 1000).

  Output
  For each test case, output any y (1 ≤ y < x), which satisfies the statement.
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
  int t;
  cin >> t;
  while(t--) {
    int n; 
    cin >> n;
    cout << n - 1 << endl;
  }
  
  return 0;
}