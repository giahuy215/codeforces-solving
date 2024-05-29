/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1974/A
  A. Phone Desktop
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Little Rosie has a phone with a desktop (or launcher, as it is also called). The desktop can consist of several screens. 
  Each screen is represented as a grid of size 5×3, i.e., five rows and three columns.

  There are x applications with an icon size of 1×1 cells; such an icon occupies only one cell of the screen. 
  There are also y applications with an icon size of 2×2 cells; such an icon occupies a square of 4 cells on the screen. 
  Each cell of each screen can be occupied by no more than one icon.

  Rosie wants to place the application icons on the minimum number of screens. Help her find the minimum number of screens needed.

  Input
  The first line of the input contains t (1 ≤ t ≤ 10^4) — the number of test cases.

  The first and only line of each test case contains two integers x and y (0 ≤ x,y ≤ 99) — the number of applications with a 1×1 icon and the number of applications with a 2×2 icon, respectively.

  Output
  For each test case, output the minimal number of required screens on a separate line.
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
  int t;
  cin >> t;
  while(t--) {
    int x, y, a;
    cin >> x >> y;
    if(y % 2 == 0) {
      a = y / 2;
    } else {
      a = y / 2 + 1;
    }
    if((a * 15 - y * 4) >= x) cout << a << endl;
    else {
      int b = x - (a * 15 - y * 4);
      if(b % 15 != 0) cout << a + b / 15 + 1 << endl;
      else cout << a + b / 15 << endl;
    }
  }
  
  return 0;
}