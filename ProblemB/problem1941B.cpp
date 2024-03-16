/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1941/problem/B
  B. Rudolf and 121
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Rudolf has an array a of n integers, the elements are numbered from 1 to n.

  In one operation, he can choose an index i (2 ≤ i ≤ n−1) and assign:

  - ai−1=ai−1−1
  - ai=ai−2
  - ai+1=ai+1−1
  Rudolf can apply this operation any number of times. Any index i can be used zero or more times.

  Can he make all the elements of the array equal to zero using this operation?

  Input
  The first line of the input contains a single integer t (1 ≤ t ≤ 1e4) — the number of test cases in the test.

  The first line of each case contains a single integer n (3 ≤ n ≤ 2⋅1e5) — the number of elements in the array.

  The second line of each case contains n integers a1,a2,…,an (0 ≤ aj ≤ 1e9) — the elements of the array.

  It is guaranteed that the sum of the values of n over all test cases does not exceed 2⋅105.

  Output
  For each test case, output "YES" if it is possible to make all the elements of the array zero using the described operations. Otherwise, output "NO".

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
  while (t--)
  {
    int n;
    cin >> n;
    int a[n];
    FOR(i, 0, n) cin >> a[i];
    FOR(i, 1, n - 1) {
      if(a[i - 1] == 0 && i != n - 2) continue;
      else {
        if(a[i] < a[i - 1] * 2 || a[i + 1] < a[i - 1]) {
          cout << "NO" << endl;
          break;
        } else {
          a[i] -= a[i - 1] * 2; 
          a[i + 1] -= a[i - 1];
          a[i - 1] = 0;
          if(i == n - 2 && a[i] == 0 && a[i - 1] == 0 && a[i + 1] == 0) {
            cout << "YES" << endl;
            break;
          } else if(i == n - 2 && (a[i] != 0 || a[i - 1] != 0 || a[i + 1] != 0)) {
            cout << "NO" << endl;
            break;
          }
        }
      }
    }
  }

  return 0;
}