/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/426/problem/A
  A. Sereja and Mugs
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Sereja showed an interesting game to his friends. The game goes like that. Initially, there is a table with an empty cup and n water mugs on it. 
  Then all players take turns to move. During a move, a player takes a non-empty mug of water and pours all water from it into the cup. 
  If the cup overfills, then we assume that this player lost.

  As soon as Sereja's friends heard of the game, they wanted to play it. Sereja, on the other hand, wanted to find out whether his friends can play the game in such a way that there are no losers. 
  You are given the volumes of all mugs and the cup. Also, you know that Sereja has (n - 1) friends. Determine if Sereja's friends can play the game so that nobody loses.

  Input
  The first line contains integers n and s (2 ≤ n ≤ 100; 1 ≤ s ≤ 1000) — the number of mugs and the volume of the cup. The next line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 10). 
  Number ai means the volume of the i-th mug.

  Output
  In a single line, print "YES" (without the quotes) if his friends can play in the described manner, and "NO" (without the quotes) otherwise.
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)
#define all(x) (x).begin(), (x).end()
#define endl "\n"

typedef long long ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, s, sum = 0;
  cin >> n >> s;
  int a[n];
  FOR(i, 0, n) {
    cin >> a[i];
    sum += a[i];
  }
  sort(a, a + n);
  sum -= a[n - 1];
  cout << (sum > s ? "NO" : "YES");

  return 0;
}