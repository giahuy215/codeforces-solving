/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1904/A
  A. Forked!
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Lunchbox is done with playing chess! His queen and king just got forked again!

  In chess, a fork is when a knight attacks two pieces of higher value, commonly the king and the queen. 
  Lunchbox knows that knights can be tricky, and in the version of chess that he is playing, knights are even trickier: 
  instead of moving 1 tile in one direction and 2 tiles in the other, knights in Lunchbox's modified game move a tiles in one direction and b tiles in the other.

  Lunchbox is playing chess on an infinite chessboard which contains all cells (x,y) where x and y are (possibly negative) integers. 
  Lunchbox's king and queen are placed on cells (xK,yK) and (xQ,yQ) respectively. 
  Find the number of positions such that if a knight was placed on that cell, it would attack both the king and queen.

  Input
  Each test contains multiple test cases. The first line contains an integer t (1 ≤ t ≤ 1000) — the number of test cases. 
  The description of the test cases follows.

  The first line of each test case contains two integers a and b (1 ≤ a,b ≤ 1e8) — describing the possible moves of the knight.

  The second line of each test case contains two integers xK and yK (0 ≤ xK,yK ≤ 1e8) — the position of Lunchbox's king.

  The third line in a test case contains xQ and yQ (0 ≤ xQ,yQ ≤ 1e8) — the position of Lunchbox's queen.

  It is guaranteed that Lunchbox's queen and king will occupy different cells. That is, (xK,yK) ≠ (xQ,yQ).

  Output
  For each test case, output the number of positions on an infinite chessboard such that a knight can attack both the king and the queen.
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int a, b, x1, y1, x2, y2;
    cin >> a >> b >> x1 >> y1 >> x2 >> y2;
    
    if(a == b) {
      set<pair<int, int>> p;
      p.insert({x1 + a, y1 + b});
      p.insert({x1 - a, y1 - b});
      p.insert({x1 - a, y1 + b});
      p.insert({x1 + a, y1 - b});
      p.insert({x2 + a, y2 + b});
      p.insert({x2 - a, y2 - b});
      p.insert({x2 - a, y2 + b});
      p.insert({x2 + a, y2 - b});
      cout << 8 - p.size() << endl;
    } else {
      set<pair<int, int>> p;
      p.insert({x1 + a, y1 + b});
      p.insert({x1 - a, y1 - b});
      p.insert({x1 - a, y1 + b});
      p.insert({x1 + a, y1 - b});
      p.insert({x2 + a, y2 + b});
      p.insert({x2 - a, y2 - b});
      p.insert({x2 - a, y2 + b});
      p.insert({x2 + a, y2 - b});
      p.insert({x1 + b, y1 + a});
      p.insert({x1 - b, y1 - a});
      p.insert({x1 - b, y1 + a});
      p.insert({x1 + b, y1 - a});
      p.insert({x2 + b, y2 + a});
      p.insert({x2 - b, y2 - a});
      p.insert({x2 - b, y2 + a});
      p.insert({x2 + b, y2 - a});
      cout << 16 - p.size() << endl;
    }
  }

  return 0;
}