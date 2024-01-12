/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1351/B
  B. Square?
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Vasya claims that he had a paper square. He cut it into two rectangular parts using one vertical or horizontal cut. 
  Then Vasya informed you the dimensions of these two rectangular parts. You need to check whether Vasya originally had a square. 
  In other words, check if it is possible to make a square using two given rectangles.

  Input
  The first line contains an integer t (1 ≤ t ≤ 1e4) — the number of test cases in the input. Then t test cases follow.

  Each test case is given in two lines.

  The first line contains two integers a1 and b1 (1 ≤ a1,b1 ≤ 100) — the dimensions of the first one obtained after cutting rectangle. 
  The sizes are given in random order (that is, it is not known which of the numbers is the width, and which of the numbers is the length).

  The second line contains two integers a2 and b2 (1 ≤ a2,b2 ≤ 100) — the dimensions of the second obtained after cutting rectangle. 
  The sizes are given in random order (that is, it is not known which of the numbers is the width, and which of the numbers is the length).

  Output
  Print t answers, each of which is a string "YES" (in the case of a positive answer) or "NO" (in the case of a negative answer). 
  The letters in words can be printed in any case (upper or lower).
*/
#include <bits/stdc++.h>
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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a == c && b + d == a) cout << "YES" << endl;
    else if(a == d && b + c == a) cout << "YES" << endl;
    else if(b == c && a + d == b) cout << "YES" << endl;
    else if(b == d && a + c == b) cout << "YES" << endl;
    else cout << "NO" << endl;
  }

  return 0;
}