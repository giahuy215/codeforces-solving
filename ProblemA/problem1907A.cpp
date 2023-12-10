// https://codeforces.com/problemset/problem/1907/A
// A. Rook
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output

// As you probably know, chess is a game that is played on a board with 64 squares arranged in an 8×8 grid. 
// Columns of this board are labeled with letters from a to h, and rows are labeled with digits from 1 to 8. 
// Each square is described by the row and column it belongs to.

// https://espresso.codeforces.com/1c4decab4bd3b54908882afbdc0546269ef03ded.png (image)

// The rook is a piece in the game of chess. During its turn, it may move any non-zero number of squares horizontally or vertically. Your task is to find all possible moves for a rook on an empty chessboard.

// Input
// The first line of input contains single integer t (1≤t≤64) — the number of test cases. The descriptions of test cases follow.

// Each test case contains one string of two characters, description of the square where rook is positioned. 
// The first character is a letter from a to h, the label of column, and the second character is a digit from 1 to 8, the label of row.

// The same position may occur in more than one test case.

// Output
// For each test case, output descriptions of all squares where the rook can move, in the same format as in the input.

// You can output squares in any order per test case.

#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)

#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    int n = s[0] - 96;
    int m = s[1] - 48;
    FOR(i, 1, 9) {
      if(i != m) {
        cout << s[0] << i << "\n";
      }
      if(i != n) {
        cout << char(i + 96) << s[1] << "\n";
      }
    }
  }

  return 0;
}