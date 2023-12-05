// https://codeforces.com/problemset/problem/734/A
// A. Anton and Danik
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Anton likes to play chess, and so does his friend Danik.

// Once they have played n games in a row. For each game it's known who was the winner — Anton or Danik. 
// None of the games ended with a tie.

// Now Anton wonders, who won more games, he or Danik? Help him determine this.

// Input
// The first line of the input contains a single integer n (1 ≤ n ≤ 100 000) — the number of games played.

// The second line contains a string s, consisting of n uppercase English letters 'A' and 'D' — the outcome of each of the games. 
// The i-th character of the string is equal to 'A' if the Anton won the i-th game and 'D' if Danik won the i-th game.

// Output
// If Anton won more games than Danik, print "Anton" (without quotes) in the only line of the output.

// If Danik won more games than Anton, print "Danik" (without quotes) in the only line of the output.

// If Anton and Danik won the same number of games, print "Friendship" (without quotes).
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, cntA = 0, cntD = 0;
  cin>>n;
  string s;
  cin>>s;
  FOR(i,0,n) {
    if(s[i] == 'A') {
      cntA++;
    } else {
      cntD++;
    }
  }
  if(cntA > cntD) cout<<"Anton";
  if(cntA < cntD) cout<<"Danik";
  if(cntA == cntD) cout<<"Friendship";

  return 0;
}