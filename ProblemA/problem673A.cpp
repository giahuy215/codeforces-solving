/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/673/A
  A. Bear and Game
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  
  Bear Limak likes watching sports on TV. He is going to watch a game today. The game lasts 90 minutes and there are no breaks.

  Each minute can be either interesting or boring. If 15 consecutive minutes are boring then Limak immediately turns TV off.

  You know that there will be n interesting minutes t1, t2, ..., tn. Your task is to calculate for how many minutes Limak will watch the game.

  Input
  The first line of the input contains one integer n (1 ≤ n ≤ 90) — the number of interesting minutes.

  The second line contains n integers t1, t2, ..., tn (1 ≤ t1 < t2 < ... tn ≤ 90), given in the increasing order.

  Output
  Print the number of minutes Limak will watch the game.
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
  int n, min = 0;
  cin >> n;
  int a[n];
  FOR(i, 0, n) cin >> a[i];
  FOR(i, 0, n) {
    if(a[i] - min > 15) {
      cout << min + 15;
      return 0;
    } else min = a[i];
  }
  if(90 - min > 15) cout << min + 15;
  else cout << 90;
  
  return 0;
}