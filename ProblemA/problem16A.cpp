/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/16/problem/A
  A. Flag
  time limit per test: 2 seconds
  memory limit per test: 64 megabytes
  input: standard input
  output: standard output
  
  According to a new ISO standard, a flag of every country should have a chequered field n × m, each square should be of one of 10 colours, 
  and the flag should be «striped»: each horizontal row of the flag should contain squares of the same colour, 
  and the colours of adjacent horizontal rows should be different. Berland's government asked you to find out whether their flag meets the new ISO standard.

  Input
  The first line of the input contains numbers n and m (1 ≤ n, m ≤ 100), n — the amount of rows, m — the amount of columns on the flag of Berland. 
  Then there follows the description of the flag: each of the following n lines contain m characters. 
  Each character is a digit between 0 and 9, and stands for the colour of the corresponding square.

  Output
  Output YES, if the flag meets the new ISO standard, and NO otherwise.
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, m, cnt = 0;
  cin >> n >> m;
  char a[n][m];
  FOR(i, 0, n) {
    FOR(j, 0, m) {
      cin >> a[i][j];
    }
  }

  FOR(i, 0, n) {
    FOR(j, 0, m) {
      if(a[i][j] != a[i][j - 1] && j != 0) {
        cnt++;
        break;
      }
    }
    if((a[i][0] == a[i - 1][0] && i != 0) || cnt != 0) {
      cnt++;
      cout << "NO";
      break;
    }
  }
  if(cnt == 0) cout << "YES";

  return 0;
}