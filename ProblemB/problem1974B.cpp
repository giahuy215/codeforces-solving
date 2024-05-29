/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1974/problem/B
  B. Symmetric Encoding
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Polycarp has a string s, which consists of lowercase Latin letters. He encodes this string using the following algorithm:

  - first, he constructs a new auxiliary string r, which consists of all distinct letters of the string s, written in alphabetical order;
  - then the encoding happens as follows: each character in the string s is replaced by its symmetric character from the string r 
  (the first character of the string r will be replaced by the last, the second by the second from the end, and so on).

  For example, encoding the string s="codeforces" happens as follows:

  - the string r is obtained as "cdefors";
  - the first character s1='c' is replaced by 's';
  - the second character s2='o' is replaced by 'e';
  - the third character s3='d' is replaced by 'r';
  - ...
  - the last character s10='s' is replaced by 'c'.

  The string r and replacements for s="codeforces".
  Thus, the result of encoding the string s="codeforces" is the string "serofedsoc".

  Write a program that performs decoding — that is, restores the original string s from the encoding result.

  Input
  The first line contains a single integer t (1 ≤ t ≤ 10^4) — the number of test cases.

  The first line of each test case contains a single integer n (1 ≤ n ≤ 2⋅10^5) — the length of the string b.

  The second line of each test case contains a string b of length n, consisting of lowercase Latin letters — the result of encoding the original string s.

  It is guaranteed that the sum of the values of n over all test cases in the test does not exceed 2⋅10^5.

  Output
  For each test case, output the string s from which the encoding result b was obtained.
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
    string s;
    cin >> n >> s;
    string v = s;
    sort(v.begin(), v.end());
    FOR(i, 1, v.size()) {
      if(v[i] == v[i - 1]) {
        v.erase(v.begin() + i);
        i--;
      }
    }
    string z = v;
    reverse(all(z));

    FOR(i, 0, s.size()) {
      FOR(j, 0, v.size()) {
        if(s[i] == v[j]) {
          cout << z[j];
          break;
        }
      }
    }
    cout << endl;
  }
  
  return 0;
}