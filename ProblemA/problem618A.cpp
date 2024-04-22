/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/618/A
  A. Slime Combining
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Your friend recently gave you some slimes for your birthday. You have n slimes all initially with value 1.

  You are going to play a game with these slimes. Initially, you put a single slime by itself in a row. Then, you will add the other n - 1 slimes one by one. 
  When you add a slime, you place it at the right of all already placed slimes. Then, while the last two slimes in the row have the same value v, you combine them together to create a slime with value v + 1.

  You would like to see what the final state of the row is after you've added all n slimes. Please print the values of the slimes in the row from left to right.

  Input
  The first line of the input will contain a single integer, n (1 ≤ n ≤ 100 000).

  Output
  Output a single line with k integers, where k is the number of slimes in the row after you've finished the procedure described in the problem statement. 
  The i-th of these numbers should be the value of the i-th slime from the left.
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
  int n;
  cin >> n;
  while(n > 0) {
    int a = log2(n);
    cout << a + 1 << " ";
    n = n - pow(2, a);
  }

  return 0;
}