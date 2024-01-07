/*
  Author: Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1919/A
  A. Wallet Exchange
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  
  Alice and Bob are bored, so they decide to play a game with their wallets. Alice has a coins in her wallet, while Bob has b coins in his wallet.

  Both players take turns playing, with Alice making the first move. In each turn, the player will perform the following steps in order:

  1. Choose to exchange wallets with their opponent, or to keep their current wallets.
  2. Remove 1coin from the player's current wallet. The current wallet cannot have 0coins before performing this step.
  The player who cannot make a valid move on their turn loses. If both Alice and Bob play optimally, determine who will win the game.

  Input
  Each test contains multiple test cases. The first line contains a single integer t(1 ≤ t ≤ 1000) — the number of test cases. The description of the test cases follows.

  The first and only line of each test case contains two integers aand b(1 ≤ a,b ≤ 1e9) — the number of coins in Alice's and Bob's wallets, respectively.

  Output
  For each test case, output "Alice" if Alice will win the game, and "Bob" if Bob will win the game.
*/
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int a, b;
    cin >> a >> b;
    if((a & 1) == (b & 1)) {
      cout << "Bob" << endl;
    } else {
      cout << "Alice" << endl;
    }
  }
  
  return 0;
}