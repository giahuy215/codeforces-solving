// https://codeforces.com/problemset/problem/281/A
// A. Word Capitalization
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

// Note, that during capitalization all the letters except the first one remains unchanged.

// Input
// A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. 
// The length of the word will not exceed 1e3.

// Output
// Output the given word after capitalization.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  string s;
  cin >> s;
  int a = s[0];
  if(a >= 97) {
    s[0] = char(a - 32);
  }
  cout << s;
  return 0;
}