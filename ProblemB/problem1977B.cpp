/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1977/problem/B
  B. Binary Colouring
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  You are given a positive integer x. Find any array of integers a0,a1,…,an−1 for which the following holds:
  - 1 ≤ n ≤ 32,
  - ai is 1, 0, or −1 for all 0 ≤ i ≤ n−1,
  - x = n−1 ∑i=0 ai⋅2i,
  There does not exist an index 0 ≤ i ≤ n−2 such that both ai≠0 and ai + 1 ≠ 0.
  It can be proven that under the constraints of the problem, a valid array always exists.

  Input
  Each test contains multiple test cases. The first line of input contains a single integer t (1 ≤ t ≤ 10^4) — the number of test cases. 
  The description of the test cases follows.

  The only line of each test case contains a single positive integer x (1 ≤ x < 230).

  Output
  For each test case, output two lines.

  On the first line, output an integer n (1 ≤ n ≤ 32) — the length of the array a0,a1,…,an−1.

  On the second line, output the array a0,a1,…,an−1.

  If there are multiple valid arrays, you can output any of them.
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
    int n, cnt = 0, a[32] {0}, j = 0;
    cin >> n;
    while(n > 0) {
      if(n % 2 == 0) {
        a[j] = 0;
      } else if((n - 1) % 4 == 0) {
        a[j] = 1;
      } else {
        a[j] = -1;
        n++;
      }
      n /= 2;
      cnt++;
      j++;
    }
    cout << 31 << endl;
    FOR(i, 0, 31) {
      cout << a[i] << " ";
    }
    cout << endl;
  }
  
  return 0;
}