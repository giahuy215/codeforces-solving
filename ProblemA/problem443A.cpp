// https://codeforces.com/problemset/problem/443/A
// A. Anton and Letters
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output

// Recently, Anton has found a set. The set consists of small English letters. Anton carefully wrote out all the letters from the set in one line, 
// separated by a comma. He also added an opening curved bracket at the beginning of the line and a closing curved bracket at the end of the line.

// Unfortunately, from time to time Anton would forget writing some letter and write it again. 
// He asks you to count the total number of distinct letters in his set.

// Input
// The first and the single line contains the set of letters. The length of the line doesn't exceed 1000. 
// It is guaranteed that the line starts from an opening curved bracket and ends with a closing curved bracket. 
// Between them, small English letters are listed, separated by a comma. Each comma is followed by a space.

// Output
// Print a single number — the number of distinct letters in Anton's set.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  string s;
  getline(cin, s);
  int n[26], cnt = 0;
  FOR(i, 0, 26) {
    n[i] = 0;
  }
  for(int i = 1; i < s.size(); i += 3) {
    if(s[i] == '}') {
      cout << 0;
      return 0;
    }
    int a = s[i] - 97;
    n[a]++;
  }
  FOR(i, 0, 26) {
    if(n[i] != 0) {
      cnt++;
    }
  }
  cout << cnt;
  return 0;
}