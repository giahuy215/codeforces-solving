/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/265/A
  A. Colorful Stones (Simplified Edition)
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  There is a sequence of colorful stones. The color of each stone is one of red, green, or blue. You are given a string s. 
  The i-th (1-based) character of s represents the color of the i-th stone. If the character is "R", "G", or "B", the color of the corresponding stone is red, green, or blue, respectively.

  Initially Squirrel Liss is standing on the first stone. You perform instructions one or more times.

  Each instruction is one of the three types: "RED", "GREEN", or "BLUE". After an instruction c, if Liss is standing on a stone whose colors is c, Liss will move one stone forward, else she will not move.

  You are given a string t. The number of instructions is equal to the length of t, and the i-th character of t represents the i-th instruction.

  Calculate the final position of Liss (the number of the stone she is going to stand on in the end) after performing all the instructions, and print its 1-based position. 
  It is guaranteed that Liss don't move out of the sequence.

  Input
  The input contains two lines. The first line contains the string s (1 ≤ |s| ≤ 50). The second line contains the string t (1 ≤ |t| ≤ 50). 
  The characters of each string will be one of "R", "G", or "B". It is guaranteed that Liss don't move out of the sequence.

  Output
  Print the final 1-based position of Liss in a single line.
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
  string s, t;
  cin >> s >> t;
  int cnt = 1;
  int k = 0;
  FOR(i, 0, t.size()) {
    if(t[i] == s[k]) {
      cnt++;
      k++;
    }
  }
  cout << cnt;

  return 0;
}