/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/262/problem/A
  A. Roma and Lucky Numbers
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Roma (a popular Russian name that means 'Roman') loves the Little Lvov Elephant's lucky numbers.

  Let us remind you that lucky numbers are positive integers whose decimal representation only contains lucky digits 4 and 7. 
  For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

  Roma's got n positive integers. He wonders, how many of those integers have not more than k lucky digits? 
  Help him, write the program that solves the problem.

  Input
  The first line contains two integers n, k (1 ≤ n, k ≤ 100). The second line contains n integers ai (1 ≤ ai ≤ 10^9) — the numbers that Roma has.

  The numbers in the lines are separated by single spaces.

  Output
  In a single line print a single integer — the answer to the problem.
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
  int n, k, sum = 0;
  cin >> n >> k;
  int a[n];
  FOR(i, 0, n) {
    cin >> a[i];
  }
  FOR(i, 0, n) {
    int j = 0;
    while (a[i] > 0) {
      if(a[i] % 10 == 4 || a[i] % 10 == 7) {
        j++;
      }
      a[i] /= 10;
    }
    if(j <= k) sum++;
  }
  cout << sum;

  return 0;
}