// https://codeforces.com/problemset/problem/119/A
// A. Epic Game
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Simon and Antisimon play a game. Initially each player receives one fixed positive integer that doesn't change throughout the game. 
// Simon receives number a and Antisimon receives number b. They also have a heap of n stones. 
// The players take turns to make a move and Simon starts. During a move a player should take from the heap the number of 
// stones equal to the greatest common divisor of the fixed number he has received and the number of stones left in the heap. 
// A player loses when he cannot take the required number of stones (i. e. the heap has strictly less stones left than one needs to take).

// Your task is to determine by the given a, b and n who wins the game.

// Input
// The only string contains space-separated integers a, b and n (1 ≤ a, b, n ≤ 100) — the fixed numbers Simon and Antisimon 
// have received correspondingly and the initial number of stones in the pile.

// Output
// If Simon wins, print "0" (without the quotes), otherwise print "1" (without the quotes).
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)

using namespace std;

int GCD(int a, int b) {
  if (a == 0 || b == 0){
    return a + b;
  }
  while (a != b){
    if (a > b){
      a -= b;
    }else{
      b -= a;
    }
  }
  return a;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int a,b,n;
  cin>>a>>b>>n;

  while (true)
  {
    n -= GCD(a,n);
    if(n == 0) {
      cout<<0;
      break;
    }
    n -= GCD(b,n);
    if(n == 0) {
      cout<<1;
      break;
    }
  }
  
  return 0;
}