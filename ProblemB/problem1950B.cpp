/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1950/problem/B
  B. Upscaling
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  You are given an integer n. Output a 2n×2n checkerboard made of 2×2 squares alternating '#' and '.', with the top-left cell being '#'.

  https://espresso.codeforces.com/51f8f6d3cb1f2f2902c6a38cfb4b9719aa0d5eca.png (image)

  Input
  The first line contains an integer t (1 ≤ t ≤ 20) — the number of test cases.

  The only line of each test case contains a single integer n (1 ≤ n ≤ 20) — it means you need to output a checkerboard of side length 2n.

  Output
  For each test case, output 2n lines, each containing 2n characters without spaces — the checkerboard, as described in the statement. Do not output empty lines between test cases.
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
    int n;
    cin >> n;
    FOR(i, 0, n) {
      string s = "";
      FOR(j, 0, n) {
        if((i + j) % 2 == 0) s += "##";
        else s += "..";
      }
      cout << s << endl << s << endl;
    }
  }

  return 0;
}