/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1971/problem/C
  C. Clock and Strings
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  There is a clock labeled with the numbers 1 through 12 in clockwise order, as shown below.

  (image) https://espresso.codeforces.com/61e348551b1e468c2730b6e3b36e33b76e3132ca.png

  In this example, (a,b,c,d)=(2,9,10,6), and the strings intersect.

  Alice and Bob have four distinct integers a, b, c, d not more than 12. Alice ties a red string connecting a and b, and Bob ties a blue string connecting c and d. 
  Do the strings intersect? (The strings are straight line segments.)

  Input
  The first line contains a single integer t (1 ≤ t ≤ 5940) — the number of test cases.

  The only line of each test case contains four distinct integers a, b, c, d (1 ≤ a,b,c,d ≤ 12).

  Output
  For each test case, output "YES" (without quotes) if the strings intersect, and "NO" (without quotes) otherwise.

  You can output "YES" and "NO" in any case (for example, strings "yEs", "yes", and "Yes" will be recognized as a positive response).
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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(((a > c && a < d) || (a < c && a > d)) && ((b > c && b > d) || (b < c && b < d))) {
      cout << "YES" << endl;
    } else if(((b > c && b < d) || (b < c && b > d)) && ((a > c && a > d) || (a < c && a < d))) {
      cout << "YES" << endl;
    } else cout << "NO" << endl;
  }
  
  return 0;
}