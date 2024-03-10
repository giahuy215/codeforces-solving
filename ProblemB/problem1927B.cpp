/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1927/problem/B
  B. Following the String
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Polycarp lost the string s of length n consisting of lowercase Latin letters, but he still has its trace.

  The trace of the string s is an array a of n integers, where ai is the number of such indices j (j < i) that si = sj. 
  For example, the trace of the string abracadabra is the array [0,0,0,1,0,2,0,3,1,1,4].

  Given a trace of a string, find any string s from which it could have been obtained. The string s should consist only of lowercase Latin letters a-z.

  Input
  The first line of the input contains a single integer t (1 ≤ t ≤ 1e4) — the number of test cases. Then the descriptions of the test cases follow.

  The first line of each test case contains a single integer n (1 ≤ n ≤ 2⋅1e5) — the length of the lost string.

  The second line of each test case contains n integers a1,a2,…,an (0 ≤ ai < n) — the trace of the string. It is guaranteed that for the given trace, there exists a suitable string s.

  It is guaranteed that the sum of n over all test cases does not exceed 2⋅1e5.

  Output
  For each test case, output a string s that corresponds to the given trace. If there are multiple such strings s, then output any of them.

  The string s should consist of lowercase Latin letters a-z.

  It is guaranteed that for each test case, a valid answer exists.
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
    int n;
    cin >> n;
    int a[n], b[26] {0};
    FOR(i, 0, n) {
      cin >> a[i];
    }
    FOR(i, 0, n) {
      FOR(j, 0, 26) {
        if(b[j] == a[i]) {
          cout << char(j + 97);
          b[j]++;
          break;
        }
      }
    }
    cout << endl;
  }

  return 0;
}