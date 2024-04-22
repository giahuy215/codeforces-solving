/*
  Author : Nguyen Duc Gia Huy
*/
/*
  B. Guess the Permutation
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  
  Bob has a permutation of integers from 1 to n. Denote this permutation as p. The i-th element of p will be denoted as pi. 
  For all pairs of distinct integers i, j between 1 and n, he wrote the number ai, j = min(pi, pj). 
  He writes ai, i = 0 for all integer i from 1 to n.

  Bob gave you all the values of ai, j that he wrote down. Your job is to reconstruct any permutation that could have generated these values. 
  The input will be formed so that it is guaranteed that there is at least one solution that is consistent with the information given.

  Input
  The first line of the input will contain a single integer n (2 ≤ n ≤ 50).

  The next n lines will contain the values of ai, j. The j-th number on the i-th line will represent ai, j. The i-th number on the i-th line will be 0. 
  It's guaranteed that ai, j = aj, i and there is at least one solution consistent with the information given.

  Output
  Print n space separated integers, which represents a permutation that could have generated these values. If there are multiple possible solutions, print any of them.
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
  cin>>n;
  int a[n] = {0};
  FOR(i, 0, n) {
    int x = 0, y = 0;
    FOR(j, 0, n) {
      cin >> x;
      y = max(x,y);
    }
    cout << y + a[y] <<" ";
    a[y] = 1;
  }

  return 0;
}