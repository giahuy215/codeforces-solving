/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/14/A
  A. Letter
  time limit per test: 1 second
  memory limit per test: 64 megabytes
  input: standard input
  output: standard output
  
  A boy Bob likes to draw. Not long ago he bought a rectangular graph (checked) sheet with n rows and m columns. 
  Bob shaded some of the squares on the sheet. Having seen his masterpiece, he decided to share it with his elder brother, 
  who lives in Flatland. Now Bob has to send his picture by post, but because of the world economic crisis and high oil prices, 
  he wants to send his creation, but to spend as little money as possible. For each sent square of paper (no matter whether it is shaded or not) Bob has to pay 3.14 burles. 
  Please, help Bob cut out of his masterpiece a rectangle of the minimum cost, that will contain all the shaded squares. 
  The rectangle's sides should be parallel to the sheet's sides.

  Input
  The first line of the input data contains numbers n and m (1 ≤ n, m ≤ 50), n — amount of lines, and m — amount of columns on Bob's sheet. 
  The following n lines contain m characters each. Character «.» stands for a non-shaded square on the sheet, and «*» — for a shaded square. 
  It is guaranteed that Bob has shaded at least one square.

  Output
  Output the required rectangle of the minimum cost. Study the output data in the sample tests to understand the output format better.
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, m, rMax = 0, cMax = 0, rMin = 51, cMin = 51;
  cin >> n >> m;
  char c[n][m];
  FOR(i, 0, n) {
    FOR(j, 0, m) {
      cin >> c[i][j];
      if(c[i][j] == '*') {
        if(i > rMax) rMax = i;
        if(j > cMax) cMax = j;
        if(i < rMin) rMin = i;
        if(j < cMin) cMin = j;
      }
    }
  }
  
  FOR(i, rMin, rMax + 1) {
    FOR(j, cMin, cMax + 1) {
      cout << c[i][j];
    }
    cout << endl;
  }

  return 0;
}