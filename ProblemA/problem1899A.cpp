// https://codeforces.com/problemset/problem/1899/A
// A. Game with Integers
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Vanya and Vova are playing a game. Players are given an integer n. On their turn, the player can add 1 to the current integer or subtract 1.
// The players take turns; Vanya starts. If after Vanya's move the integer is divisible by 3, then he wins. 
// If 10 moves have passed and Vanya has not won, then Vova wins.

// Write a program that, based on the integer n, determines who will win if both players play optimally.

// Input
// The first line contains the integert t (1 ≤ t ≤ 100) — the number of test cases.
// The single line of each test case contains the integer n (1 ≤ t ≤ 1000).

// Output
// For each test case, print "First" without quotes if Vanya wins, and "Second" without quotes if Vova wins.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;
  while (t--) {
    int n;
    cin>>n;
    if(n % 3 ==0 ) {
      cout<<"Second"<<endl;
    } else {
      cout<<"First"<<endl;
    }
  }

  return 0;
}