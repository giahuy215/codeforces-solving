// https://codeforces.com/contest/894/problem/A
// A. QAQ
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// "QAQ" is a word to denote an expression of crying. Imagine "Q" as eyes with tears and "A" as a mouth.

// Now Diamond has given Bort a string consisting of only uppercase English letters of length n. 
// There is a great number of "QAQ" in the string (Diamond is so cute!).

// Bort wants to know how many subsequences "QAQ" are in the string Diamond has given. 
// Note that the letters "QAQ" don't have to be consecutive, but the order of letters should be exact.

// Input
// The only line contains a string of length n (1 ≤ n ≤ 100). It's guaranteed that the string only contains uppercase English letters.

// Output
// Print a single integer — the number of subsequences "QAQ" in the string.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  string s;
  int a = 0, q = 0, sum = 0;
  cin >> s;
  FOR(i, 0, s.size()) {
    if(s[i] == 'A') {
      a += q;
    }
    if(s[i] == 'Q') {
      sum += a;
      q++;
    }
  }
  cout << sum;
  return 0;
}