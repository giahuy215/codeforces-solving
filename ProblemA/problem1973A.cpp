/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 09-07-2024
*/
/*
  https://codeforces.com/problemset/problem/1973/A
  A. Chess For Three
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Three friends gathered to play a few games of chess together.

  In every game, two of them play against each other. The winner gets 2 points while the loser gets 0, and in case of a draw, both players get 1 point each. 
  Note that the same pair of players could have played any non-negative number of times (possibly zero). 
  It is also possible that no games were played at all.

  You've been told that their scores after all the games were played were p1, p2 and p3. 
  Additionally, it is guaranteed that p1 ≤ p2 ≤ p3 holds.

  Find the maximum number of draws that could have happened and print it. 
  If there isn't any way to obtain p1, p2 and p3 as a result of a non-negative number of games between the three players, print −1 instead.

  Input
  Each test contains multiple test cases. The first line contains the number of test cases t (1 ≤ t ≤ 500). The description of the test cases follows.

  The first line of each test case contains three integers p1, p2 and p3 (0 ≤ p1 ≤ p2 ≤ p3 ≤ 30) — the scores of the three players, sorted non-decreasingly.

  Output
  For each testcase, print one number — the maximum possible number of draws that could've happened, or −1 if the scores aren't consistent with any valid set of games and results.
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while(t--) {
    int a, b, c, ans = 0;
    cin >> a >> b >> c;
    if(a + b <= c && (c - b - a) % 2 == 0 ) {
      cout << a + b << "\n";
    } else if(a + b > c && (b + a - c) % 2 == 0) {
      cout << c + (a + b - c) / 2 << "\n";
    } else cout << -1 << "\n";
  }
  
  return 0;
}