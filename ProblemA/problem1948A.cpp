/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1948/problem/A
  A. Special Characters
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  You are given an integer n.
  Your task is to build a string of uppercase Latin letters. There must be exactly n special characters in this string. 
  Let's call a character special if it is equal to exactly one of its neighbors.

  For example, there are 6 special characters in the AAABAACC string (at positions: 1, 3, 5, 6, 7 and 8).

  Print any suitable string or report that there is no such string.

  Input
  The first line contains a single integer t (1 ≤ t ≤ 50) — the number of test cases.

  The only line of each test case contains a single integer n (1 ≤ n ≤ 50).

  Output
  For each test case, print the answer as follows:

  if there is no suitable string, print one line containing the string NO;
  otherwise, print two lines. The first line should contain the string YES; 
  on the second line print a string of length at most 200 — the answer itself (it can be shown that if some answers exist, then there is an answer of length at most 200). 
  If there are several solutions, print any of them.
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
  while (t--)
  {
    int n;
    cin >> n;
    if(n % 2 != 0) cout << "NO" << endl;
    else {
      cout << "YES" << endl;
      int a = n / 2;
      FOR(i, 0, a) {
        if(i % 2 == 0) cout << "AA";
        else cout << "BB";
      }
      cout << endl;
    }
  }

  return 0;
}