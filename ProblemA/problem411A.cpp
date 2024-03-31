/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/411/problem/A
  A. Password Check
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  You have probably registered on Internet sites many times. And each time you should enter your invented password. 
  Usually the registration form automatically checks the password's crypt resistance. If the user's password isn't complex enough, a message is displayed. 
  Today your task is to implement such an automatic check.

  Web-developers of the company Q assume that a password is complex enough, if it meets all of the following conditions:

  - the password length is at least 5 characters;
  - the password contains at least one large English letter;
  - the password contains at least one small English letter;
  - the password contains at least one digit.
  You are given a password. Please implement the automatic check of its complexity for company Q.

  Input
  The first line contains a non-empty sequence of characters (at most 100 characters). 
  Each character is either a large English letter, or a small English letter, or a digit, or one of characters: "!", "?", ".", ",", "_".

  Output
  If the password is complex enough, print message "Correct" (without the quotes), otherwise print message "Too weak" (without the quotes).
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
  string s;
  int cnt = 0, sm = 0, lg = 0;
  cin >> s;
  if(s.size() < 5) {
    cout << "Too weak";
    return 0;
  }

  FOR(i, 0, s.size()) {
    int a = s[i];
    if(s[i] >= 48 && s[i] <= 57) {
      cnt++;
    } else if(s[i] >= 65 && s[i] <= 90) {
      lg++;
    } else if(s[i] >= 97 && s[i] <= 122) {
      sm++;
    }
    if(cnt != 0 && sm != 0 && lg != 0) {
      cout << "Correct";
      return 0;
    }
  }
  cout << "Too weak";
  
  return 0;
}
