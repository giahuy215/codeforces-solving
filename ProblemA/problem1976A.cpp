/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1976/A
  A. Verify Password
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Monocarp is working on his new site, and the current challenge is to make the users pick strong passwords.

  Monocarp decided that strong passwords should satisfy the following conditions:

  - password should consist only of lowercase Latin letters and digits;
  - there should be no digit that comes after a letter (so, after each letter, there is either another letter or the string ends);
  - all digits should be sorted in the non-decreasing order;
  - all letters should be sorted in the non-decreasing order.
  Note that it's allowed for the password to have only letters or only digits.

  Monocarp managed to implement the first condition, but he struggles with the remaining ones. Can you help him to verify the passwords?

  Input
  The first line contains a single integer t (1 ≤ t ≤ 1000) — the number of testcases.

  The first line of each testcase contains a single integer n (1 ≤ n ≤ 20) — the length of the password.

  The second line contains a string, consisting of exactly n characters. Each character is either a lowercase Latin letter or a digit.

  Output
  For each testcase, print "YES" if the given password is strong and "NO" otherwise.
*/
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while(t--) {
    int n;
    bool ans = true;
    string s;
    cin >> n >> s;
    for(int i = 1; i < n; i++) {
      if(s[i] < s[i - 1]) {
        cout << "NO\n";
        ans = false;
        break;
      } else continue;
    }
    if(ans) cout << "YES\n";
  }
  
  return 0;
}