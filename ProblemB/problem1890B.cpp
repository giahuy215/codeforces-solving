// https://codeforces.com/problemset/problem/1890/B
// B. Qingshan Loves Strings
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Qingshan has a string s, while Daniel has a string t. Both strings only contain 0 and 1.

// A string a of length k is good if and only if

// - ai≠ai+1 for all i=1,2,…,k−1.
// For example, 1, 101, 0101 are good, while 11, 1001, 001100 are not good.

// Qingshan wants to make s good. To do this, she can do the following operation any number of times (possibly, zero):

// insert t to any position of s (getting a new s).Please tell Qingshan if it is possible to make s good.

// Input
// The input consists of multiple test cases. The first line contains a single integer T (1 ≤ T ≤ 2000) — the number of test cases. 
// The description of the test cases follows.

// The first line of each test case contains two integers n and m (1≤n,m≤50) — the length of the strings s and t, respectively.

// The second line of each test case contains a string s of length n.

// The third line of each test case contains a string t of length m.

// It is guaranteed that s and t only contain 0 and 1.

// Output
// For each test case, print "YES" (without quotes), if it is possible to make s good, and "NO" (without quotes) otherwise.

// You can print letters in any case (upper or lower).
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int good(string s) {
  if(s.size() == 1) return 1;
  if(s.size() == 2) {
    if(s[0] != s[1]) {
      return 1;
    } else {
      return 0;
    }
  }
  FOR(i,1,s.size()) {
    int a = s[i];
    int b = s[i - 1];
    if(abs(a-b) != 1) {
      return 0;
    } 
  }
  return 1;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin>>t;
  while (t--) {
    int n, m, cnt0 = 0, cnt1 = 0;
    string s, v;
    cin >> n >> m >> s >> v;

    if(good(s)) {
      cout<<"YES"<<endl;
    } else if(!good(s) && !good(v)) {
      cout<<"NO"<<endl;
    } else {
      FOR(i,1,n) {
        int a = s[i] - 48;
        int b = s[i-1] - 48;
        if(a == 1 && a - b == 0) {
          cnt1++;
        }
        if(a == 0 && a - b == 0) {
          cnt0++;
        }
      }
      int c = v[0] - 48;
      if(cnt0 != 0 && cnt1 != 0) {
        cout<<"NO"<<endl;
      } else if(cnt1 != 0 && cnt0 == 0 && c == 0 && m % 2 == 1) {
        cout<<"YES"<<endl;
      } else if(cnt0 != 0 && cnt1 == 0 && c == 1 && m % 2 == 1) {
        cout<<"YES"<<endl;
      } else {
        cout<<"NO"<<endl;
      }
    }
  }

  return 0;
}