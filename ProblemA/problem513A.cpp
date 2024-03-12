/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/513/problem/A
  A. Game
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Two players play a simple game. Each player is provided with a box with balls. 
  First player's box contains exactly n1 balls and second player's box contains exactly n2 balls. 
  In one move first player can take from 1 to k1 balls from his box and throw them away. 
  Similarly, the second player can take from 1 to k2 balls from his box in his move. 
  Players alternate turns and the first player starts the game. The one who can't make a move loses. 
  Your task is to determine who wins if both players play optimally.

  Input
  The first line contains four integers n1, n2, k1, k2. All numbers in the input are from 1 to 50.

  This problem doesn't have subproblems. You will get 3 points for the correct submission.

  Output
  Output "First" if the first player wins and "Second" otherwise.
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
  int n1, n2, k1, k2;
  cin >> n1 >> n2 >> k1 >> k2;
	cout << ( n1 > n2 ? "First" : "Second");

  return 0;
}