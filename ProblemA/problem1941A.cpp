/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1941/A
  A. Rudolf and the Ticket
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Rudolf is going to visit Bernard, and he decided to take the metro to get to him. The ticket can be purchased at a machine that accepts exactly two coins, the sum of which does not exceed k.

  Rudolf has two pockets with coins. In the left pocket, there are n coins with denominations b1,b2,…,bn. In the right pocket, there are m coins with denominations c1,c2,…,cm. 
  He wants to choose exactly one coin from the left pocket and exactly one coin from the right pocket (two coins in total).

  Help Rudolf determine how many ways there are to select indices f and s such that bf + cs ≤ k.

  Input
  The first line contains an integer t (1 ≤ t ≤ 100) — the number of test cases. Then follows the description of each test case.

  The first line of each test case contains three natural numbers n, m, and k (1 ≤ n,m ≤ 100, 1 ≤ k ≤ 2000) — the number of coins in the left and right pockets, 
  and the maximum sum of two coins for the ticket payment at the counter, respectively.

  The second line of each test case contains n integers bi (1 ≤ bi ≤ 1000) — the denominations of coins in the left pocket.

  The third line of each test case contains m integers ci (1 ≤ ci ≤ 1000) — the denominations of coins in the right pocket.

  Output
  For each testcase, output a single integer — the number of ways Rudolf can select two coins, taking one from each pocket, so that the sum of the coins does not exceed k.
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
  while (t--)
  {
    int n, m, k, cnt = 0;
    cin >> n >> m >> k;
    int a[n], b[m];
    FOR(i, 0, n) {
      cin >> a[i];
    } 
    FOR(i, 0, m) {
      cin >> b[i];
    }
    FOR(i, 0, n) {
      FOR(j, 0, m) {
        if(a[i] + b[j] <= k) {
          cnt++;
        }
      }
    }
    cout << cnt << endl;
  }

  return 0;
}