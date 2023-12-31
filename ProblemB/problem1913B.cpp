/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1913/problem/B
  B. Swap and Delete
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  You are given a binary string s (a string consisting only of 0-s and 1-s).
  You can perform two types of operations on s:

  - delete one character from s. This operation costs 1 coin;
  - swap any pair of characters in s. This operation is free (costs 0 coins).
  You can perform these operations any number of times and in any order.

  Let's name a string you've got after performing operations above as t. The string t is good if for each i from 1 to |t| ti≠si (|t| is the length of the string t). 
  The empty string is always good. Note that you are comparing the resulting string t with the initial string s.

  What is the minimum total cost to make the string t good?

  Input
  The first line contains a single integer t (1 ≤ t ≤ 1e4) — the number of test cases. Then t test cases follow.

  The only line of each test case contains a binary string s (1 ≤ |s| ≤ 2⋅1e5; si ∈ {0, 1}) — the initial string, consisting of characters 0 and/or 1.

  Additional constraint on the input: the total length of all strings s doesn't exceed 2⋅1e5.

  Output
  For each test case, print one integer — the minimum total cost to make string t good.
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
  while (t--) {
    string s;
    int cnt0 = 0, cnt1 = 0;
    cin >> s;
    if(s.empty()) {
      cout << 0 << "\n";
    } else if(s.size() == 1) {
      cout << 1 << "\n";
    } else {
      FOR(i, 0, s.size()) {
        if(s[i] == '0') {
          cnt0++;
        } else {
          cnt1++;
        }
      }
      if(cnt0 == 0 || cnt1 == 0) cout << s.size() << "\n";
      else if(cnt0 == cnt1) {
        cout << 0 << "\n";
      } else {
        FOR(i, 0, s.size()) {
          if(s[i] == '0') {
            if(cnt1 > 0) {
              cnt1--;
            } else {
              break;
            }
          } else {
            if(cnt0 > 0) {
              cnt0--;
            } else {
              break;
            }
          }
        }
        cout << cnt0 + cnt1 << "\n";
      }
    }
    
  }

  return 0;
}