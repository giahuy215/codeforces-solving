/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 06-07-2024
*/
/*
  https://codeforces.com/contest/1982/problem/B
  B. Collatz Conjecture
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Recently, the first-year student Maxim learned about the Collatz conjecture, but he didn't pay much attention during the lecture, 
  so he believes that the following process is mentioned in the conjecture:

  There is a variable x and a constant y. The following operation is performed k times:

  - increase x by 1, then
  - while the number x is divisible by y, divide it by y.
  Note that both of these actions are performed sequentially within one operation.
  For example, if the number x=16, y=3, and k=2, then after one operation x becomes 17, and after another operation x becomes 2, because after adding one, x=18 is divisible by 3 twice.

  Given the initial values of x, y, and k, Maxim wants to know what is the final value of x.

  Input
  Each test consists of multiple test cases. The first line contains an integer t (1 ≤ t ≤ 10^4) — the number of test cases. Then follows the description of the test cases.

  The only line of each test case contains three integers x, y, and k (1 ≤ x,k ≤ 10^9, 2 ≤ y ≤ 10^9) — the initial variable, constant and the number of operations.

  Output
  For each test case, output a single integer — the number obtained after applying k operations.
*/
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while(t--) {
    ll x, y, k;
    cin >> x >> y >> k;
    while(k > 0 && x != 1) {
      ll tmp = min(k, y - x % y);
      x += tmp;
      k -= tmp;
      while (x % y == 0) {
        x /= y;
      }
    }
    cout << x + k % (y - 1) << "\n";
  }
  
  return 0;
}