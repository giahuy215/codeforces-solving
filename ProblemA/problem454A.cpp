/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/454/problem/A
  A. Little Pony and Crystal Mine
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Twilight Sparkle once got a crystal from the Crystal Mine. A crystal of size n (n is odd; n > 1) is an n × n matrix with a diamond inscribed into it.

  You are given an odd integer n. You need to draw a crystal of size n. The diamond cells of the matrix should be represented by character "D". 
  All other cells of the matrix should be represented by character "*". Look at the examples to understand what you need to draw.

  Input
  The only line contains an integer n (3 ≤ n ≤ 101; n is odd).

  Output
  Output a crystal of size n.
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
  int mid = n / 2;
  FOR(i, 0, n) {
    int a = abs(mid - i);
    FOR(j, 0, n) {
      if(j != mid && (j < a || n - 1 - j < a)) cout << "*";
      else cout << "D";
    }
    cout << endl;
  }

  return 0;
}