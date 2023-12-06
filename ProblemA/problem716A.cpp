// https://codeforces.com/problemset/problem/716/A
// A. Crazy Computer
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// ZS the Coder is coding on a crazy computer. If you don't type in a word for a c consecutive seconds, everything you typed disappear!

// More formally, if you typed a word at second a and then the next word at second b, then if b - a ≤ c, 
// just the new word is appended to other words on the screen. If b - a > c, then everything on the screen disappears 
// and after that the word you have typed appears on the screen.

// For example, if c = 5 and you typed words at seconds 1, 3, 8, 14, 19, 20 then at the second 8 there will be 3 words on the screen. 
// After that, everything disappears at the second 13 because nothing was typed. At the seconds 14 and 19 another two words are typed, 
// and finally, at the second 20, one more word is typed, and a total of 3 words remain on the screen.

// You're given the times when ZS the Coder typed the words. Determine how many words remain on the screen after he finished typing everything.

// Input
// The first line contains two integers n and c (1 ≤ n ≤ 100 000, 1 ≤ c ≤ 10^9) — the number of words ZS the Coder typed and the crazy computer delay respectively.

// The next line contains n integers t1, t2, ..., tn (1 ≤ t1 < t2 < ... < tn ≤ 10^9), where ti denotes the second when ZS the Coder typed the i-th word.

// Output
// Print a single positive integer, the number of words that remain on the screen after all n words was typed, in other words, at the second tn.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, c, count = 0;
  cin>>n>>c;

  int a[n];
  FOR(i,0,n) {
    cin>>a[i];
  }

  FOR(i,1,n) {
    if(a[i] - a[i - 1] <= c) {
      count++;
    } else {
      count = 0;
    }
  }
  cout<<count + 1;
  return 0;
}