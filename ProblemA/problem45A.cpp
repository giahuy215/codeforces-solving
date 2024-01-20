/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/45/A
  A. Codecraft III
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  Today Vasya visited a widely known site and learned that the continuation of his favourite game Codecraft II will appear after exactly k months. 
  He looked at the calendar and learned that at the moment is the month number s. Vasya immediately got interested in what month Codecraft III will appear. 
  Help him understand that.

  All the twelve months in Vasya's calendar are named using their usual English names: January, February, March, April, May, June, July, August, September, October, November, December.

  Input
  The first input line contains the name of the current month. It is guaranteed that it is a proper English name of one of twelve months. The first letter is uppercase, the rest are lowercase. 
  The second line contains integer k (0 ≤ k ≤ 100) — the number of months left till the appearance of Codecraft III.

  Output
  Print starting from an uppercase letter the name of the month in which the continuation of Codeforces II will appear. 
  The printed name must be contained in the list January, February, March, April, May, June, July, August, September, October, November, December.
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  string s[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
  string a;
  int n, b;
  cin >> a >> n;
  FOR(i, 0, 12) {
    if (s[i] == a) {
      b = ((i) + (n % 12)) % 12;
      cout << s[b];
      return 0;
    }
  }
  
  return 0;
}