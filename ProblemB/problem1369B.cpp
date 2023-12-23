/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1369/problem/B
  B. AccurateLee
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  Lee was cleaning his house for the party when he found a messy string under the carpets. Now he'd like to make it clean accurately and in a stylish way...

  The string s he found is a binary string of length n (i. e. string consists only of 0-s and 1-s).

  In one move he can choose two consecutive characters si and si+1, and if si is 1 and si+1 is 0, 
  he can erase exactly one of them (he can choose which one to erase but he can't erase both characters simultaneously). The string shrinks after erasing.

  Lee can make an arbitrary number of moves (possibly zero) and he'd like to make the string s as clean as possible. 
  He thinks for two different strings x and y, the shorter string is cleaner, and if they are the same length, then the lexicographically smaller string is cleaner.

  Now you should answer t test cases: for the i-th test case, print the cleanest possible string that Lee can get by doing some number of moves.

  Small reminder: if we have two strings x and y of the same length then x is lexicographically smaller than y if there is a position i such that x1=y1, x2=y2,..., xi−1=yi−1 and xi<yi.

  Input
  The first line contains the integer t (1 ≤ t ≤ 1e4) — the number of test cases.
  Next 2t lines contain test cases — one per two lines.
  The first line of each test case contains the integer n (1 ≤ n ≤ 1e5) — the length of the string s.
  The second line contains the binary string s. The string s is a string of length n which consists only of zeroes and ones.
  It's guaranteed that sum of n over test cases doesn't exceed 105.

  Output
  Print t answers — one per test case.
  The answer to the i-th test case is the cleanest string Lee can get after doing some number of moves (possibly zero).
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int n, cnt1 = 0, cnt0 = 0;
    string s, v, u;
    cin >> n >> s; 
    for(int i = 0; i < n; i++) {
      if(s[i] == '0') v += s[i];
      else break;
    }
    for (int i = n - 1; i >= 0; i--) {
      if(s[i] == '1') u += s[i];
      else break;
    }

    if(v.length() + u.length() == n) {
      cout << s << "\n";
    } else {
      cout << 0 << v << u << "\n";
    }
  }
  
  return 0;
}