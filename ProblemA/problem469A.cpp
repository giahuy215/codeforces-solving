/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/469/problem/A
  A. I Wanna Be the Guy
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  There is a game called "I Wanna Be the Guy", consisting of n levels. Little X and his friend Little Y are addicted to the game. Each of them wants to pass the whole game.

  Little X can pass only p levels of the game. And Little Y can pass only q levels of the game. 
  You are given the indices of levels Little X can pass and the indices of levels Little Y can pass. 
  Will Little X and Little Y pass the whole game, if they cooperate each other?

  Input
  The first line contains a single integer n (1 ≤  n ≤ 100).

  The next line contains an integer p (0 ≤ p ≤ n) at first, then follows p distinct integers a1, a2, ..., ap (1 ≤ ai ≤ n). 
  These integers denote the indices of levels Little X can pass. The next line contains the levels Little Y can pass in the same format. 
  It's assumed that levels are numbered from 1 to n.

  Output
  If they can pass all the levels, print "I become the guy.". If it's impossible, print "Oh, my keyboard!" (without the quotes).
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
  int n, p, q;
  cin >> n >> p;
  set<int> s;
  FOR(i, 0, p) {
    int a; cin >> a;
    s.insert(a);
  }
  cin >> q;
  FOR(i, 0, q) {
    int a; cin >> a;
    s.insert(a);
  }
  if(s.size() != n) cout << "Oh, my keyboard!";
  else cout << "I become the guy.";

  return 0;
}