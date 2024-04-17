/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/540/A
  A. Combination Lock
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Scrooge McDuck keeps his most treasured savings in a home safe with a combination lock. Each time he wants to put there the treasures that he's earned fair and square, he has to open the lock.


  The combination lock is represented by n rotating disks with digits from 0 to 9 written on them. Scrooge McDuck has to turn some disks so that the combination of digits on the disks forms a secret combination. 
  In one move, he can rotate one disk one digit forwards or backwards. In particular, in one move he can go from digit 0 to digit 9 and vice versa. What minimum number of actions does he need for that?

  Input
  The first line contains a single integer n (1 ≤ n ≤ 1000) — the number of disks on the combination lock.

  The second line contains a string of n digits — the original state of the disks.

  The third line contains a string of n digits — Scrooge McDuck's combination that opens the lock.

  Output
  Print a single integer — the minimum number of moves Scrooge McDuck needs to open the lock.
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
  string s, v;
  cin >> s >> v;
  FOR(i, 0, n) {
    if(s[i] != v[i]) {
      int a = abs(v[i] - s[i]);
      cnt += min (a, 10 - a);
    }
  }
  cout << cnt;

  return 0;
}