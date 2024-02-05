/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1925/A
  A. We Got Everything Covered!
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  You are given two positive integers n and k.

  Your task is to find a string s such that all possible strings of length n that can be formed using the first k lowercase English alphabets occur as a subsequence of s.

  If there are multiple answers, print the one with the smallest length. If there are still multiple answers, you may print any of them.

  Note: A string a is called a subsequence of another string b if a can be obtained by deleting some (possibly zero) characters from b without changing the order of the remaining characters.

  Input
  The first line of input contains a single integer t (1 ≤ t ≤ 676) denoting the number of test cases.

  Each test case consists of a single line of input containing two integers n (1 ≤ n ≤ 26) and k (1 ≤ k ≤ 26).

  Output
  For each test case, print a single line containing a single string s which satisfies the above property. If there are multiple answers, print the one with the smallest length. If there are still multiple answers, you may print any of them.
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
    int n, k, cnt = 0;
    cin >> n >> k;
    string s;
    FOR(i, 0, n * k) {
      if(cnt == k) cnt = 0;
      s += char(97 + cnt);
      cnt++;
    }
    cout << s << endl;
  }

  return 0;
}