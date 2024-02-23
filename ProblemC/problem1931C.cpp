/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1931/problem/C
  C. Make Equal Again
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  You have an array a of n integers.

  You can no more than once apply the following operation: select three integers i, j, x (1 ≤ i ≤ j ≤ n) and assign all elements of the array with indexes from i to j the value x. 
  The price of this operation depends on the selected indices and is equal to (j−i+1) burles.

  For example, the array is equal to [1,2,3,4,5,1]. If we choose i = 2, j = 4, x = 8, then after applying this operation, the array will be equal to [1,8,8,8,5,1].

  What is the least amount of burles you need to spend to make all the elements of the array equal?

  Input
  The first line contains a single integer t (1 ≤ t ≤ 1e4) — the number of input test cases. The descriptions of the test cases follow.

  The first line of the description of each test case contains a single integer n (1 ≤ n ≤ 2⋅1e5) — the size of the array.

  The second line of the description of each test case contains n integers a1,a2,…,an (1 ≤ ai ≤ n) — array elements.

  It is guaranteed that the sum of n for all test cases does not exceed 2⋅1e5.

  Output
  For each test case, output one integer — the minimum number of burles that will have to be spent to make all the elements of the array equal. It can be shown that this can always be done.
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
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    FOR(i, 0, n) {
      cin >> a[i];
    }
    int l = 1, r = 1;
    FOR(i, 1, n) {
      if(a[i] == a[i - 1]) l++;
      else break;
    }
    for(int i = n - 2; i > 0; i--) {
      if(a[i] == a[i + 1]) r++;
      else break;
    }
    if(l == n) cout << 0 << endl;
    else if(a[0] == a[n - 1]) cout << n - l - r << endl;
    else cout << n - max(l, r) << endl;

  }

  return 0;
}