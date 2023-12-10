// https://codeforces.com/problemset/problem/615/A
// A. Bulbs
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Vasya wants to turn on Christmas lights consisting of m bulbs. Initially, all bulbs are turned off. There are n buttons, 
// each of them is connected to some set of bulbs. Vasya can press any of these buttons. When the button is pressed, 
// it turns on all the bulbs it's connected to. Can Vasya light up all the bulbs?

// If Vasya presses the button such that some bulbs connected to it are already turned on, they do not change their state, i.e. remain turned on.

// Input
// The first line of the input contains integers n and m (1 ≤ n, m ≤ 100) — the number of buttons and the number of bulbs respectively.

// Each of the next n lines contains xi (0 ≤ xi ≤ m) — the number of bulbs that are turned on by the i-th button, 
// and then xi numbers yij (1 ≤ yij ≤ m) — the numbers of these bulbs.

// Output
// If it's possible to turn on all m bulbs print "YES", otherwise print "NO".
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, m;
  cin >> n >> m;
  int a[m + 1];
  FOR(i, 1, m + 1) {
    a[i] = 0;
  }
  while (n--)
  {
    int x;
    cin >> x;
    FOR(i, 1, x + 1) {
      int y;
      cin >> y;
      a[y]++;
    }
  }
  FOR(i, 1, m + 1) {
    if(a[i] == 0) {
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
  return 0;
}