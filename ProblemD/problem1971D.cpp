/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1971/problem/D
  D. Binary Cut
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  You are given a binary string†. Please find the minimum number of pieces you need to cut it into, so that the resulting pieces can be rearranged into a sorted binary string.


  Note that:

  - each character must lie in exactly one of the pieces;
  - the pieces must be contiguous substrings of the original string;
  - you must use all the pieces in the rearrangement.
  † A binary string is a string consisting of characters 0 and 1. A sorted binary string is a binary string such that all characters 0 come before all characters 1.

  Input
  The first line contains a single integer t (1 ≤ t ≤ 500) — the number of test cases.

  The only line of each test case contains a single string s (1 ≤ |s| ≤ 500) consisting of characters 0 and 1, where |s| denotes the length of the string s.

  Output
  For each test case, output a single integer — the minimum number of pieces needed to be able to rearrange the string into a sorted binary string.
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
    int cnt = 1, cnt01 = 0;
    string s;
    cin >> s;
    FOR(i, 1, s.size()) {
      if(s[i] != s[i - 1]) {
        cnt++;
      }
      if(s[i] != s[i - 1] && s[i] == '1') {
        cnt01++;
      }
    }
    if(cnt01 > 0) cnt--;
    cout << cnt << endl;
  }
  
  return 0;
}