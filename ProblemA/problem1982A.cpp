/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 06-07-2024
*/
/*
  https://codeforces.com/problemset/problem/1982/A
  A. Soccer
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Dima loves watching soccer. In such a game, the score on the scoreboard is represented as x : y, 
  where x is the number of goals of the first team, and y is the number of goals of the second team. 
  At any given time, only one team can score a goal, so the score x : y can change to either (x+1) : y, or x : (y+1).

  While watching a soccer game, Dima was distracted by very important matters, and after some time, he returned to watching the game. 
  Dima remembers the score right before he was distracted, and the score right after he returned. 
  Given these two scores, he wonders the following question. 
  Is it possible that, while Dima was not watching the game, the teams never had an equal score?

  It is guaranteed that at neither of the two time points Dima remembers the teams had equal scores. 
  However, it is possible that the score did not change during his absence.

  Help Dima and answer the question!

  Input
  Each test consists of several test cases. The first line contains an integer t (1 ≤ t ≤ 10^4) — the number of test cases. Then follows the description of the test cases.

  The first line of each test case contains two integers x1,y1 (0 ≤ x1,y1 ≤ 10^9, x1 ≠ y1) — the score before Dima was distracted.

  The second line of each test case contains two integers x2,y2 (x1 ≤ x2 ≤ 10^9, y1 ≤ y2 ≤ 10^9, x2 ≠ y2) — the score when Dima returned.

  Output
  For each test case, output "YES" without quotes if it is possible, that the teams never had a tie while Dima was away, otherwise output "NO" without quotes.

  You can output each letter in any case (for example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as a positive answer).
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
  int t;
  cin >> t;
  while(t--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if((a > b && c > d) || (a < b && c < d)) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  
  return 0;
}