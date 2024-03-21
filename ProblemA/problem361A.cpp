/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/361/problem/A
  A. Levko and Table
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  Levko loves tables that consist of n rows and n columns very much. He especially loves beautiful tables. 
  A table is beautiful to Levko if the sum of elements in each row and column of the table equals k.

  Unfortunately, he doesn't know any such table. Your task is to help him to find at least one of them.

  Input
  The single line contains two integers, n and k (1 ≤ n ≤ 100, 1 ≤ k ≤ 1000).

  Output
  Print any beautiful table. Levko doesn't like too big numbers, so all elements of the table mustn't exceed 1000 in their absolute value.

  If there are multiple suitable tables, you are allowed to print any of them.
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
  int n, k;
  cin >> n >> k;
  FOR(i, 0, n) {
    FOR(j, 0, n) {
      if(j == i) cout << k << " ";
      else cout << 0 << " ";
    }
    cout << endl;
  }
 
  return 0;
}