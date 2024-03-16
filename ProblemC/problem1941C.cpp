/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1941/problem/C
  C. Rudolf and the Ugly String
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Rudolf has a string s of length n. Rudolf considers the string s to be ugly if it contains the substring† "pie" or the substring "map", otherwise the string s will be considered beautiful.

  For example, "ppiee", "mmap", "dfpiefghmap" are ugly strings, while "mathp", "ppiiee" are beautiful strings.

  Rudolf wants to shorten the string s by removing some characters to make it beautiful.

  The main character doesn't like to strain, so he asks you to make the string beautiful by removing the minimum number of characters. 
  He can remove characters from any positions in the string (not just from the beginning or end of the string).

  † String a is a substring of b if there exists a consecutive segment of characters in string b equal to a.

  Input
  The first line contains a single integer t (1 ≤ t ≤ 1e4) — the number of test cases. The descriptions of the test cases follow.

  The first line of each test case contains a single integer n (1 ≤ n ≤ 1e6) — the length of the string s.

  The next line of each test case contains the string s of length n. The string s consists of lowercase Latin letters.

  The sum of n over all test cases does not exceed 1e6.

  Output
  For each test case, output a single integer — the minimum number of characters that need to be deleted to make the string s beautiful. If the string is initially beautiful, then output 0.
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
  int t; cin >> t;
  while(t--) {
    int n, cnt = 0;
    string s;
    cin >> n >> s;
    for(int i = 1; i < s.size() - 1; i++) {
      if((s[i] == 'a' && s[i - 1] == 'm' && s[i + 1] == 'p') || (s[i] == 'i' && s[i - 1] == 'p' && s[i + 1] == 'e')) {
        cnt++;
        i += 2;
      }
    }
    cout << cnt << endl;
  }

  return 0;
}