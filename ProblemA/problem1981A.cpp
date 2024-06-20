/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1981/A
  A. Turtle and Piggy Are Playing a Game
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Turtle and Piggy are playing a number game.

  First, Turtle will choose an integer x, such that l ≤ x ≤ r, where l,r are given. It's also guaranteed that 2l ≤ r.

  Then, Piggy will keep doing the following operation until x becomes 1:

  - Choose an integer p such that p ≥ 2 and p∣x (i.e. x is a multiple of p).
  - Set x to xp, and the score will increase by 1.
  The score is initially 0. Both Turtle and Piggy want to maximize the score. Please help them to calculate the maximum score.

  Input
  Each test contains multiple test cases. The first line contains the number of test cases t (1 ≤ t ≤ 10^4). The description of the test cases follows.

  The first line of each test case contains two integers l,r (1 ≤ l ≤ r ≤ 10^9,2l ≤ r) — The range where Turtle can choose the integer from.

  Output
  For each test case, output a single integer — the maximum score.
*/
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cout.tie(0);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--) {
    int l, r, ans = 0, x = 1;
    cin >> l >> r;
    while(x <= r) {
      ans++;
      x = x * 2;
    }
    cout << ans - 1 << "\n";
  }

  return 0;
}