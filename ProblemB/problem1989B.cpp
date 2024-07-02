/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 02-07-2024
*/
/*
  https://codeforces.com/contest/1989/problem/B
  B. Substring and Subsequence
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  You are given two strings a and b, both consisting of lowercase Latin letters.

  A subsequence of a string is a string which can be obtained by removing several (possibly zero) characters from the original string. 
  A substring of a string is a contiguous subsequence of that string.

  For example, consider the string abac:

  - a, b, c, ab, aa, ac, ba, bc, aba, abc, aac, bac and abac are its subsequences;
  - a, b, c, ab, ba, ac, aba, bac and abac are its substrings.
  Your task is to calculate the minimum possible length of the string that contains a as a substring and b as a subsequence.

  Input
  The first line contains a single integer t (1 ≤ t ≤ 10^3) — the number of test cases.

  The first line of each test case contains a string a (1 ≤ |a| ≤ 100), consisting of lowercase Latin letters.

  The second line of each test case contains a string b (1 ≤ |b| ≤ 100), consisting of lowercase Latin letters.

  Output
  For each test case, print a single integer — the minimum possible length of the string that contains a as a substring and b as a subsequence.
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while(t--) {
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    int ans = m + n;
    for(int i = 0; i < m; i++) {
      int p = i;
      for(int j = 0; j < n; j++) {
        if(a[j] == b[p]) p++;
      }
      ans = min(ans, m + n - p + i);
    }
    cout << ans << "\n";
  }
  
  return 0;
}