/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1950/problem/C
  C. Clock Conversion
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Given the time in 24-hour format, output the equivalent time in 12-hour format.

  - 24-hour format divides the day into 24 hours from 00 to 23, each of which has 60 minutes from 00 to 59.
  - 12-hour format divides the day into two halves: the first half is AM, and the second half is PM. In each half, the hours are numbered in the order 12,01,02,03,…,11. Each hour has 60 minutes numbered from 00 to 59.
  
  Input
  The first line contains a single integer t (1 ≤ t ≤ 1440) — the number of test cases.

  The only line of each test case contains a string s of length 5 with format hh:mm representing a valid time in the 24-hour format. hh represents the hour from 00 to 23, and mm represents the minute from 00 to 59.

  The input will always be a valid time in 24-hour format.

  Output
  For each test case, output two strings separated by a space ("hh:mm AM" or "hh:mm PM"), which are the 12-hour equivalent to the time provided in the test case (without quotes).

  You should output the time exactly as indicated; in particular, you should not remove leading zeroes.
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
    string s , m;
    int h;
    cin >> s;
    h = stoi(s.substr(0, 2));
    m = s.substr(2, 3);
    if(h < 12) {
      if(h == 0) cout << 12 << m << " AM" << endl;
      else cout << s << " AM" << endl;
    } else if(h - 12 > 9) cout << h - 12 << m << " PM" << endl;
    else if(h - 12 == 0) cout << 12 << m << " PM" << endl;
    else cout << 0 << h - 12 << m << " PM" << endl;
  }

  return 0;
}