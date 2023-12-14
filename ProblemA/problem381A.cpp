// https://codeforces.com/problemset/problem/381/A
// A. Sereja and Dima
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output

// Sereja and Dima play a game. The rules of the game are very simple. The players have n cards in a row. Each card contains a number, 
// all numbers on the cards are distinct. The players take turns, Sereja moves first. 
// During his turn a player can take one card: either the leftmost card in a row, or the rightmost one. 
// The game ends when there is no more cards. The player who has the maximum sum of numbers on his cards by the end of the game, wins.

// Sereja and Dima are being greedy. Each of them chooses the card with the larger number during his move.

// Inna is a friend of Sereja and Dima. She knows which strategy the guys are using, so she wants to determine the final score, 
// given the initial state of the game. Help her.

// Input
// The first line contains integer n (1 ≤ n ≤ 1000) — the number of cards on the table. 
// The second line contains space-separated numbers on the cards from left to right. 
// The numbers on the cards are distinct integers from 1 to 1000.

// Output
// On a single line, print two integers. The first number is the number of Sereja's points at the end of the game, 
// the second number is the number of Dima's points at the end of the game.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, sum1 = 0, sum2 = 0;
  cin >> n;
  int a[n];
  FOR(i, 0, n) {
    cin >> a[i];
  }
  int i = 0, j = n - 1;
  FOR(b, 0, n) {
    if(b % 2 == 0 && a[i] >= a[j]) {
      sum1 += a[i];
      i++;
    } else if(b % 2 == 0 && a[i] < a[j]) {
      sum1 += a[j];
      j--;
    }
    if(b % 2 == 1 && a[i] >= a[j]) {
      sum2 += a[i];
      i++;
    } else if(b % 2 == 1 && a[i] < a[j]) {
      sum2 += a[j];
      j--;
    }
  }
  cout << sum1 << " " << sum2;

  return 0;
}