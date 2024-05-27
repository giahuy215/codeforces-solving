/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1977/A
  A. Little Nikita
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  
  The little boy Nikita was given some cubes as a present. He decided to build a tower out of them.

  Initially, the tower doesn't have any cubes. In one move, Nikita either puts exactly 1 cube on top of the tower or removes exactly 1 cube from the top of the tower. 
  Is it possible that after n moves, the resulting tower has exactly m cubes?

  Input
  Each test contains multiple test cases. The first line of input contains a single integer t (1 ≤ t ≤ 100) — the number of test cases. The description of the test cases follows.

  The only line of each test case contains two integers n and m (1 ≤ n,m ≤ 100).

  Output
  For each test case, output "Yes" (without quotes) if Nikita can obtain a tower with m cubes, and "No" (without quotes) otherwise.

  You can output each letter in any case (lowercase or uppercase). For example, the strings "yEs", "yes", "Yes", and "YES" will be accepted as a positive answer.
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
    int n, m;
    cin >> n >> m;
    if(n < m) cout << "NO" << endl;
    else if (n == m) cout << "YES" << endl;
    else {
      if((n - m) % 2 == 0) cout << "YES" << endl;
      else cout << "NO" << endl;
    }
  }
  
  return 0;
}