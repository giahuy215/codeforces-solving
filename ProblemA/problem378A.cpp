/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/378/A
  A. Playing with Dice
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Two players are playing a game. First each of them writes an integer from 1 to 6, and then a dice is thrown. The player whose written number got closer to the number on the dice wins. 
  If both payers have the same difference, it's a draw.

  The first player wrote number a, the second player wrote number b. How many ways to throw a dice are there, at which the first player wins, or there is a draw, or the second player wins?

  Input
  The single line contains two integers a and b (1 ≤ a, b ≤ 6) — the numbers written on the paper by the first and second player, correspondingly.

  Output
  Print three integers: the number of ways to throw the dice at which the first player wins, the game ends with a draw or the second player wins, correspondingly.
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
  int n, m, a = 0, b = 0, c = 0;
  cin >> n >> m;
  for(int i = 1; i <= 6; i++) {
    if(abs(n - i) == abs(m - i)) b++;
    else if(abs(n - i) > abs(m - i)) c++; 
    else a++;
  }
  cout << a << " " << b << " " << c;
  return 0;
}