// https://codeforces.com/problemset/problem/520/A
// A. Pangram
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// A word or a sentence in some language is called a pangram if all the characters of the alphabet of this language appear in it at least once. 
// Pangrams are often used to demonstrate fonts in printing or test the output devices.

// You are given a string consisting of lowercase and uppercase Latin letters. Check whether this string is a pangram. 
// We say that the string contains a letter of the Latin alphabet if this letter occurs in the string in uppercase or lowercase.

// Input
// The first line contains a single integer n (1 ≤ n ≤ 100) — the number of characters in the string.

// The second line contains the string. The string consists only of uppercase and lowercase Latin letters.

// Output
// Output "YES", if the string is a pangram and "NO" otherwise.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, b[27];
  string s;
  cin >> n >> s;
  if(n < 26) {
    cout << "NO";
    return 0;
  }
  FOR(i,0,27) {
    b[i] = 0;
  }
  FOR(i, 0, n) {
    int a = s[i];
    if(a >= 65 && a <= 90) {
      b[a - 64]++;
    } else {
      b[a - 96]++;
    }
  }
  FOR(i, 1, 27) {
    if(b[i] == 0) {
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
  return 0;
}