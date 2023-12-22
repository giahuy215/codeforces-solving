// https://codeforces.com/problemset/problem/1400/A
// A. String Similarity
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// A binary string is a string where each character is either 0 or 1. Two binary strings a and b of equal length are similar, 
// if they have the same character in some position (there exists an integer i such that ai = bi). For example:

// - 10010 and 01111 are similar (they have the same character in position 4);
// - 10010 and 11111 are similar;
// - 111 and 111 are similar;
// - 0110 and 1001 are not similar.
// You are given an integer n and a binary string s consisting of 2n−1 characters. 
// Let's denote s[l..r] as the contiguous substring of s starting with l-th character and 
// ending with r-th character (in other words, s[l..r]=sls(l+1)s(l+2)…sr).

// You have to construct a binary string w of length n which is similar to all of the following strings: s[1..n], s[2..n+1], s[3..n+2], ..., s[n..2n−1].

// Input
// The first line contains a single integer t (1 ≤ t ≤ 1000) — the number of test cases.

// The first line of each test case contains a single integer n (1 ≤ n ≤ 50).

// The second line of each test case contains the binary string s of length 2n − 1. Each character si is either 0 or 1.

// Output
// For each test case, print the corresponding binary string w of length n. If there are multiple such strings — print any of them. 
// It can be shown that at least one string w meeting the constraints always exists.
#include <bits/stdc++.h>

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
    string s, v;
    cin >> n >> s;
    char a = s[n - 1];
    for(int i = 0; i < n; i++) {
      v += a;
    }
    cout << v << "\n";
  }

  return 0;
}