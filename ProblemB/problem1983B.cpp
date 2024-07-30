/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 23-07-2024
*/
/*
  https://codeforces.com/contest/1983/problem/B
  B. Corner Twist
  time limit per test: 1 second
  memory limit per test: 256 megabytes

  You are given two grids of numbers a and b, with n rows and m columns. All the values in the grid are 0, 1 or 2.

  You can perform the following operation on a any number of times:

  - Pick any subrectangle in the grid with length and width ≥2. You are allowed to choose the entire grid as a subrectangle.
  - The subrectangle has four corners. Take any pair of diagonally opposite corners of the chosen subrectangle and add 1 to their values modulo 3.
  For the pair of corners not picked, add 2 to their values modulo 3.
  Note that the operation only changes the values of the corners of the picked subrectangle.

  Is it possible to convert the grid a into grid b by applying the above operation any number of times (possibly zero)?

  Input
  The first line contains an integer t, the number of testcases (1 ≤ t ≤ 250).

  For each testcase:

  The first line contains two integers n and m, the number of rows and columns in the grid (2 ≤ n,m ≤ 500).

  Each of the next n lines contain m characters — the j-th character of the i-th line represents ai,j.

  Each of the next n lines contain m characters — the j-th character of the i-th line represents bi,j (0 ≤ ai,j,bi,j ≤ 2).

  It is guaranteed that the sum of n over all test cases and the sum of m over all test cases do not exceed 500.

  Output
  For each test case print "YES" (without quotes) if it is possible to convert grid a into grid b and "NO" (without quotes) otherwise.

  You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.
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
    int n, m, ans = 0;
    cin >> n >> m;
    vector<int> r(n, 0), c(m, 0);
    int a[n][m], b[n][m];
    FOR(i, 0, n) {
      string s;
      cin >> s;
      FOR(j, 0, m) {
        r[i] += s[j] - '0';
        c[j] += s[j] - '0';
      }
    }
    FOR(i, 0, n) {
      string s;
      cin >> s;
      FOR(j, 0, m) {
        r[i] -= s[j] - '0';
        c[j] -= s[j] - '0';
      }
    }
    FOR(i, 0, n) {
      if(r[i] % 3 != 0) {
        ans++;
        break;
      }
    }
    if(ans == 0) {
      FOR(i, 0, m) {
        if(c[i] % 3 != 0) {
          ans++;
          break;
        }
      }
    }
    if(ans > 0) cout << "NO" << endl;
    else cout << "YES" << endl;
  }
  
  return 0;
}