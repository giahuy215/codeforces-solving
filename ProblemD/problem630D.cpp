// https://codeforces.com/contest/630/problem/D
// D. Hexagons!
// time limit per test: 0.5 seconds
// memory limit per test: 64 megabytes
// input: standard input
// output: standard output
// After a probationary period in the game development company of IT City Petya was included in a group of the programmers 
// that develops a new turn-based strategy game resembling the well known "Heroes of Might & Magic". 
// A part of the game is turn-based fights of big squadrons of enemies on infinite fields where every cell is in form of a hexagon.

// Some of magic effects are able to affect several field cells at once, cells that are situated not farther than n cells away from the cell 
// in which the effect was applied. The distance between cells is the minimum number of cell border crosses on a path from one cell to another.

// It is easy to see that the number of cells affected by a magic effect grows rapidly when n increases, so it can adversely affect the game performance. 
// That's why Petya decided to write a program that can, given n, determine the number of cells that should be repainted after effect application, 
// so that game designers can balance scale of the effects and the game performance. Help him to do it. 
// Find the number of hexagons situated not farther than n cells away from a given cell.

// https://espresso.codeforces.com/2072cd4aecc191f0717d7107255281f3e3ef487a.png (image)

// Input
// The only line of the input contains one integer n (0 ≤ n ≤ 10^9).

// Output
// Output one integer — the number of hexagons situated not farther than n cells away from a given cell.
#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll n, ans = 0;
  cin >> n;
  ll sum = n * (n + 1) / 2;
  cout << 6 * (sum) + 1;
  
  return 0;
}