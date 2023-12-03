// https://codeforces.com/contest/1873/problem/A
// A. Short Sort
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// There are three cards with letters a, b, c placed in a row in some order. You can do the following operation at most once:

// Pick two cards, and swap them.
// Is it possible that the row becomes abc after the operation? Output "YES" if it is possible, and "NO" otherwise.

// Input
// The first line contains a single integer t(1 ≤ t ≤ 6) — the number of test cases.

// The only line of each test case contains a single string consisting of each of the three characters a, b, and c exactly once,
// representing the cards.

// Output
// For each test case, output "YES" if you can make the row abc with at most one operation, or "NO" otherwise.

// You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin>>t;
  while (t--) {
    int count = 0;
    string s;
    cin>>s;
    if(s[0] != 'a') {
      count++;
    }
    if(s[1] != 'b') {
      count++;
    }
    if(s[2] != 'c') {
      count++;
    }
    if(count == 3) {
      cout<<"NO"<<endl;
    } else {
      cout<<"YES"<<endl;
    }
  }
  

  return 0;
}