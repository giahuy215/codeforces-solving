/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1922/problem/A
  A. Tricky Template
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  You are given an integer n and three strings a,b,c, each consisting of n lowercase Latin letters.

  Let a template be a string t consisting of n lowercase and/or uppercase Latin letters. 
  The string s matches the template t if the following conditions hold for all i from 1 to n:

  - if the i-th letter of the template is lowercase, then si must be the same as ti;
  - if the i-th letter of the template is uppercase, then si must be different from the lowercase version of ti. 
  For example, if there is a letter 'A' in the template, you cannot use the letter 'a' in the corresponding position of the string.
  Accordingly, the string doesn't match the template if the condition doesn't hold for at least one i.

  Determine whether there exists a template t such that the strings a and b match it, while the string c does not.

  Input
  The first line contains an integer t (1 ≤ t ≤ 1000) — the number of test cases.

  The first line of each test case contains an integer n (1 ≤ n ≤ 20) — the length of the given strings.

  The next three lines contain the strings a,b and c. Each string consists of exactly n lowercase Latin letters.

  Output
  For each testcase, print "YES" if there exists a template t such that the strings a and b match it, while the string c does not. Otherwise, print "NO".
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
  while (t--)
  {
    int n, cnt = 0;
    string a, b, c;
    cin >> n >> a >> b >> c;
    FOR(i, 0, n){
      if(a[i] != c[i] and b[i] != c[i]) {
        cnt++;
        cout << "YES" << endl;
        break;
      }
    }
    if(cnt == 0) cout << "NO" << endl;
  }

  return 0;
}