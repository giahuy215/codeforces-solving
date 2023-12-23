/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1343/B
  B. Balanced Array
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  You are given a positive integer n, it is guaranteed that n is even (i.e. divisible by 2).
  You want to construct the array a of length n such that:

  - The first n/2 elements of a are even (divisible by 2);
  - the second n/2 elements of a are odd (not divisible by 2);
  - all elements of a are distinct and positive;
  - the sum of the first half equals to the sum of the second half.

  If there are multiple answers, you can print any. It is not guaranteed that the answer exists.
  You have to answer t independent test cases.

  Input
  The first line of the input contains one integer t (1 ≤ t ≤ 1e4) — the number of test cases. Then t test cases follow.
  The only line of the test case contains one integer n (2 ≤ n ≤2⋅1e5) — the length of the array. It is guaranteed that that n is even (i.e. divisible by 2).
  It is guaranteed that the sum of n over all test cases does not exceed 2⋅1e5 (∑n ≤ 2⋅1e5).

  Output
  For each test case, print the answer — "NO" (without quotes), if there is no suitable answer for the given test case or "YES" in the first line and 
  any suitable array a1,a2,…,an (1 ≤ ai ≤ 1e9) satisfying conditions from the problem statement on the second line.
*/
#include <bits/stdc++.h>

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
    if(n % 4 != 0) {
      cout << "NO" << "\n";
    } else {
      int cnt = 0, sum = 0, j = 1;
      cout << "YES" << "\n";
      for(int i = 2; i <= n; i += 2) {
        cout << i << " ";
        cnt++;
        sum += i;
      }

      while (cnt > 0)
      {
        if(cnt == 1) {
          cout << sum << "\n";
          cnt--;
        } else {
          cout << j << " ";
          sum -= j;
          j += 2;
          cnt--;
        }
      }
      
    }
  }
  

  return 0;
}