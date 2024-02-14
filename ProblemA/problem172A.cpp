/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/172/A
  A. Phone Code
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Polycarpus has n friends in Tarasov city. Polycarpus knows phone numbers of all his friends: they are strings s1, s2, ..., sn. 
  All these strings consist only of digits and have the same length.

  Once Polycarpus needed to figure out Tarasov city phone code. He assumed that the phone code of the city is the longest common prefix of all phone numbers of his friends. 
  In other words, it is the longest string c which is a prefix (the beginning) of each si for all i (1 ≤ i ≤ n). 
  Help Polycarpus determine the length of the city phone code.

  Input
  The first line of the input contains an integer n (2 ≤ n ≤ 3·1e4) — the number of Polycarpus's friends. 
  The following n lines contain strings s1, s2, ..., sn — the phone numbers of Polycarpus's friends. 
  It is guaranteed that all strings consist only of digits and have the same length from 1 to 20, inclusive. 
  It is also guaranteed that all strings are different.

  Output
  Print the number of digits in the city phone code.
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
  int n;
  cin >> n;
  string temp;
  FOR(i, 0, n) {
    string s;
    cin >> s;
    if(i == 0) temp = s;
    else {
      ROF(j, 0, temp.size()) {
        if(temp[j] != s[j]) {
          temp.erase(j);
        }
      }
    }
  }
  cout << temp.size();

  return 0;
}