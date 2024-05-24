/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1971/B
  B. Different String
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  
  You are given a string s consisting of lowercase English letters.

  Rearrange the characters of s to form a new string r that is not equal to s, or report that it's impossible.

  Input
  The first line contains a single integer t (1 ≤ t ≤ 1000) — the number of test cases.

  The only line of each test case contains a string s of length at most 10 consisting of lowercase English letters.

  Output
  For each test case, if no such string r exists as described in the statement, output "NO" (without quotes).

  Otherwise, output "YES" (without quotes). Then, output one line — the string r, consisting of letters of string s.

  You can output "YES" and "NO" in any case (for example, strings "yEs", "yes", and "Yes" will be recognized as a positive response).

  If multiple answers are possible, you can output any of them.
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
    int cnt = 0;
    string s;
    cin >> s;
    FOR(i, 1, s.size()) {
      if(s[i - 1] != s[i]) {
        cout << "YES" << endl;
        swap(s[i], s[i - 1]);
        cnt++;
        cout << s << endl;
        break;
      }
    }

    if(cnt == 0) cout << "NO" << endl;
  }
  
  return 0;
}