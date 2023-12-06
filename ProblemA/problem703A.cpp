// https://codeforces.com/contest/703/problem/A
// A. Mishka and Game
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Mishka is a little polar bear. As known, little bears loves spending their free time playing dice for chocolates. 
// Once in a wonderful sunny morning, walking around blocks of ice, Mishka met her friend Chris, and they started playing the game.

// Rules of the game are very simple: at first number of rounds n is defined. In every round each of the players throws a cubical dice 
// with distinct numbers from 1 to 6 written on its faces. Player, whose value after throwing the dice is greater, wins the round. 
// In case if player dice values are equal, no one of them is a winner.

// In average, player, who won most of the rounds, is the winner of the game. In case if two players won the same number of rounds, 
// the result of the game is draw.

// Mishka is still very little and can't count wins and losses, so she asked you to watch their game and determine its result. 
// Please help her!

// Input
// The first line of the input contains single integer n n (1 ≤ n ≤ 100) — the number of game rounds.

// The next n lines contains rounds description. i-th of them contains pair of integers 
// mi and ci (1 ≤ mi,  ci ≤ 6) — values on dice upper face after Mishka's and Chris' throws in i-th round respectively.

// Output
// If Mishka is the winner of the game, print "Mishka" (without quotes) in the only line.

// If Chris is the winner of the game, print "Chris" (without quotes) in the only line.

// If the result of the game is draw, print "Friendship is magic!^^" (without quotes) in the only line.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, a[101][2], cntM = 0, cntC = 0;
  cin>>n;
  FOR(i,0,n) {
    FOR(j,0,2) {
      cin>>a[i][j];
    }
  }
  FOR(i,0,n) {
    if(a[i][0] > a[i][1]) {
      cntM++;
    }
    if(a[i][0] < a[i][1]) {
      cntC++;
    }
  }
  if(cntM > cntC) {
    cout<<"Mishka";
  } else if(cntM < cntC) {
    cout<<"Chris";
  } else {
    cout<<"Friendship is magic!^^";
  }
  
  return 0;
}