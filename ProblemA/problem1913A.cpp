/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1913/A
  A. Rating Increase
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Monocarp is a great solver of adhoc problems. Recently, he participated in an Educational Codeforces Round, and gained rating!
  Monocarp knew that, before the round, his rating was a. After the round, it increased to b (b > a). 
  He wrote both values one after another to not forget them.

  However, he wrote them so close to each other, that he can't tell now where the first value ends and the second value starts.
  Please, help him find some values a and b such that:

  - neither of them has a leading zero;
  - both of them are strictly greater than 0;
  - b > a;
  - they produce the given value ab when written one after another.

  If there are multiple answers, you can print any of them.

  Input
  The first line contains a single integer t (1 ≤ t ≤ 1e4) — the number of testcases.

  The only line of each testcase consists of a single string ab of length from 2 to 8 that:

  - consists only of digits;
  - doesn't start with a zero.
  
  Output
  For each testcase, determine if such values a and b exist. If they don't, print -1. Otherwise, print two integers a and b.

  If there are multiple answers, you can print any of them.
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    string s, v, u;
    cin >> s;
    int m = s.size() / 2;
    FOR(i, 0, m) {
      if(i == 0) {
        v += s[i];
      } else {
        if(s[i] == '0') {
          v += s[i];
        } else {
          m = i;
        }
      }
    }
    if(m != s.size() / 2) {
      FOR(i, m, s.size()) {
        u += s[i];
      }
      cout << v << " " << u << "\n";
    } else {
      if(s[m] == '0') {
        cout << -1 << "\n";
      } else {
        FOR(i, m, s.size()) {
          u += s[i];
        }
        int i = 0, j = m;
        if(v.size() < u.size()) {
          cout << v << " " << u << "\n";
        } else {
          while (true)
          {
            if(s[i] > s[j]) {
              cout << -1 << "\n";
              break;
            } else if(s[i] < s[j]) {
              cout << v << " " << u << "\n";
              break;
            } else {
              if(j == s.size() - 1) {
                cout << -1 << "\n";
                break;
              } else {
                i++;
                j++;
              }
            }
          }
        }
      }
    }
  }

  return 0;
}