/*
  Author : Nguyen Duc Gia Huy
*/
/*
  B. Multiply by 2, divide by 6
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  You are given an integer n. In one move, you can either multiply n by two or divide n by 6 (if it is divisible by 6 without the remainder).

  Your task is to find the minimum number of moves needed to obtain 1 from n or determine if it's impossible to do that.

  You have to answer t independent test cases.

  Input
  The first line of the input contains one integer t (1 ≤ t ≤ 2⋅1e4) — the number of test cases. Then t test cases follow.

  The only line of the test case contains one integer n (1 ≤ n ≤ 1e9).

  Output
  For each test case, print the answer — the minimum number of moves needed to obtain 1 from n if it's possible to do that or -1 if it's impossible to obtain 1 from n.
*/
#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int n, cnt2 = 0, cnt3 = 0;
    cin >> n;
    int a = n;
    while (n % 2 == 0)
    {
      n /= 2;
      cnt2++;
    }
    while (n % 3 == 0)
    {
      n /= 3;
      cnt3++;
    }
    if(n == 1 && cnt2 <= cnt3) {
      cout << 2 * cnt3 - cnt2 << endl;
    } else {
      cout << -1 << endl;
    }
  }

  return 0;
}