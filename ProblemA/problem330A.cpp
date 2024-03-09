/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/330/A
  A. Cakeminator
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  You are given a rectangular cake, represented as an r × c grid. Each cell either has an evil strawberry, or is empty. 
  For example, a 3 × 4 cake may look as follows:
  https://espresso.codeforces.com/dafcd7d176a06863c0552db8f292beed4b770cd8.png (image)

  The cakeminator is going to eat the cake! Each time he eats, he chooses a row or a column that does not contain any evil strawberries and contains at least one cake cell that has not been eaten before, 
  and eats all the cake cells there. He may decide to eat any number of times.

  Please output the maximum number of cake cells that the cakeminator can eat.

  Input
  The first line contains two integers r and c (2 ≤ r, c ≤ 10), denoting the number of rows and the number of columns of the cake. 
  The next r lines each contains c characters — the j-th character of the i-th line denotes the content of the cell at row i and column j, and is either one of these:

  - '.' character denotes a cake cell with no evil strawberry;
  - 'S' character denotes a cake cell with an evil strawberry.
  
  Output
  Output the maximum number of cake cells that the cakeminator can eat.
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
  int r, c;
  cin >> r >> c;
  char a[r][c];
  set<int> n, m;
  FOR(i, 0, r) {
    FOR(j, 0, c) {
      cin >> a[i][j];
      if(a[i][j] == 'S') {
        n.insert(i);
        m.insert(j);
      }
    }
  }
  cout << r * c - n.size() * m.size();

  return 0;
}