/*
  Author : Nguyen Duc Gia Huy
*/
/*
  A. Game Outcome
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Sherlock Holmes and Dr. Watson played some game on a checkered board n × n in size. 
  During the game they put numbers on the board's squares by some tricky rules we don't know. 
  However, the game is now over and each square of the board contains exactly one number. 
  To understand who has won, they need to count the number of winning squares. 
  To determine if the particular square is winning you should do the following. 
  Calculate the sum of all numbers on the squares that share this column (including the given square) 
  and separately calculate the sum of all numbers on the squares that share this row (including the given square). 
  A square is considered winning if the sum of the column numbers is strictly greater than the sum of the row numbers.

  https://espresso.codeforces.com/5f4f91a40be4f875bdd75333c3e82c331f09d293.png (image)

  For instance, lets game was ended like is shown in the picture. Then the purple cell is winning, because the sum of its column numbers equals 8 + 3 + 6 + 7 = 24, 
  sum of its row numbers equals 9 + 5 + 3 + 2 = 19, and 24 > 19.

  Input
  The first line contains an integer n (1 ≤ n ≤ 30). Each of the following n lines contain n space-separated integers. 
  The j-th number on the i-th line represents the number on the square that belongs to the j-th column and the i-th row on the board. 
  All number on the board are integers from 1 to 100.

  Output
  Print the single number — the number of the winning squares.
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
  int n, cnt = 0;
  cin >> n;
  int sq[n][n], row[n] {0}, col[n] {0};
  FOR(i, 0, n) {
    FOR(j, 0, n) {
      cin >> sq[i][j];
    }
  }
  FOR(i, 0, n) {
    FOR(j, 0, n) {
      row[i] += sq[i][j];
      col[i] += sq[j][i];
    }
  }
  FOR(i, 0, n) {
    FOR(j, 0, n) {
      if (col[i] > row[j]) {
        cnt++;
      }
    }
  }
  cout << cnt;

  return 0;
}