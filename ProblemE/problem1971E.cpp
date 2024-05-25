/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1971/problem/E
  E. Find the Car
  time limit per test: 3 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Timur is in a car traveling on the number line from point 0 to point n. The car starts moving from point 0 at minute 0.

  There are k+1 signs on the line at points 0,a1,a2,…,ak, and Timur knows that the car will arrive there at minutes 0,b1,b2,…,bk, respectively. 
  The sequences a and b are strictly increasing with ak=n.


  Between any two adjacent signs, the car travels with a constant speed. Timur has q queries: each query will be an integer d, 
  and Timur wants you to output how many minutes it takes the car to reach point d, rounded down to the nearest integer.

  Input
  The first line contains a single integer t (1 ≤ t ≤ 10^4) — the number of test cases.

  The first line of each test case contains three integers n, k, and q, (k ≤ n ≤ 10^9; 1 ≤ k,q ≤ 10^5) — the final destination, the number of points Timur knows the time for, and the number of queries respectively.

  The second line of each test case contains k integers ai (1 ≤ ai ≤ n; ai < ai + 1 for every 1 ≤ i ≤ k−1; ak=n).

  The third line of each test case contains k integers bi (1 ≤ bi ≤ 10^9; bi < bi + 1 for every 1 ≤ i ≤ k−1).

  Each of the following q lines contains a single integer d (0 ≤ d ≤ n) — the distance that Timur asks the minutes passed for.

  The sum of k over all test cases doesn't exceed 10^5, and the sum of q over all test cases doesn't exceed 10^5.

  Output
  For each query, output a single integer — the number of minutes passed until the car reaches the point d, rounded down.
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
    int n, k, q, sum = 0;
    cin >> n >> k >> q;
    int a[k + 1], b[k + 1];
    a[0] = 0;
    b[0] = 0;

    FOR(i, 1, k + 1) {
      cin >> a[i];
    }

    FOR(i, 1, k + 1) {
      cin >> b[i];
    }

    FOR(i, 0, q) {
      int x;
      cin >> x;
      int y = lower_bound(a + 1, a + k + 1, x) - a - 1;
      int z = b[y] + (x - a[y]) * 1.0 * (b[y + 1] - b[y]) / (a[y + 1] - a[y]);
      cout << z << " ";
    }
    cout << endl;
  }
  
  return 0;
}