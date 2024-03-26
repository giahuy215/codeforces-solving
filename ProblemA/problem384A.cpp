/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/384/problem/A
  A. Coder
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Iahub likes chess very much. He even invented a new chess piece named Coder. A Coder can move (and attack) one square horizontally or vertically. 
  More precisely, if the Coder is located at position (x, y), he can move to (or attack) positions (x + 1, y), (x–1, y), (x, y + 1) and (x, y–1).

  Iahub wants to know how many Coders can be placed on an n × n chessboard, so that no Coder attacks any other Coder.

  Input
  The first line contains an integer n (1 ≤ n ≤ 1000).

  Output
  On the first line print an integer, the maximum number of Coders that can be placed on the chessboard.

  On each of the next n lines print n characters, describing the configuration of the Coders. For an empty cell print an '.', and for a Coder print a 'C'.

  If there are multiple correct answers, you can print any.
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
  int n;
  cin >> n;

  if(n % 2 == 0) {
    cout << n * n / 2 << endl;
  } else {
    cout << (n / 2 + 1) * (n / 2 + 1) + (n / 2) * (n / 2)  << endl;
  }

  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
      if((j - i) % 2 == 0) cout << "C";
      else cout << ".";
    }
    cout << endl;
  }

  return 0;
}