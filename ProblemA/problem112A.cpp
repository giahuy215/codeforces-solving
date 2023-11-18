// https://codeforces.com/problemset/problem/112/A
// A. Petya and Strings
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Little Petya loves presents. His mum bought him two strings of the same size for his birthday. 
// The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. 
// The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. 
// Help Petya perform the comparison.

// Input
// Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. 
// It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

// Output
// If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". 
// If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)

#define all(x) (x).begin(), (x).end()
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s1,s2;
  cin>>s1>>s2;
  transform(all(s1),s1.begin(), ::tolower);
  transform(all(s2),s2.begin(), ::tolower);
  if(s1 > s2) {
    cout<<1;
  }
  if(s1 < s2) {
    cout<<-1;
  }
  if(s1 == s2) {
    cout<<0;
  }

  return 0;
}