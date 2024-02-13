/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/169/A
  A. Chores
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  Petya and Vasya are brothers. Today is a special day for them as their parents left them home alone and commissioned them to do n chores. 
  Each chore is characterized by a single parameter — its complexity. The complexity of the i-th chore equals hi.

  As Petya is older, he wants to take the chores with complexity larger than some value x (hi > x) to leave to Vasya the chores with complexity less than or equal to x (hi ≤ x). 
  The brothers have already decided that Petya will do exactly a chores and Vasya will do exactly b chores (a + b = n).

  In how many ways can they choose an integer x so that Petya got exactly a chores and Vasya got exactly b chores?

  Input
  The first input line contains three integers n, a and b (2 ≤ n ≤ 2000; a, b ≥ 1; a + b = n) — the total number of chores, the number of Petya's chores and the number of Vasya's chores.

  The next line contains a sequence of integers h1, h2, ..., hn (1 ≤ hi ≤ 1e9), hi is the complexity of the i-th chore. The numbers in the given sequence are not necessarily different.

  All numbers on the lines are separated by single spaces.

  Output
  Print the required number of ways to choose an integer value of x. If there are no such ways, print 0.
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
  int n, a, b;
  cin >> n >> a >> b;
  int arr[n];
  FOR(i, 0, n) {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  cout << arr[b] - arr[b - 1] << endl;

  return 0;
}