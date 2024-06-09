/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1975/problem/A
  A. Bazoka and Mocha's Array
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Mocha likes arrays, so before her departure, Bazoka gave her an array a consisting of n positive integers as a gift.

  Now Mocha wants to know whether array a could become sorted in non-decreasing order after performing the following operation some (possibly, zero) times:

  Split the array into two parts — a prefix and a suffix, then swap these two parts. In other words, let a=x+y. Then, we can set a:=y+x. Here + denotes the array concatenation operation.
  For example, if a=[3,1,4,1,5], we can choose x=[3,1] and y=[4,1,5], satisfying a=x+y. Then, we can set a:=y+x=[4,1,5,3,1]. We can also choose x=[3,1,4,1,5] and y=[], satisfying a=x+y.
  Then, we can set a:=y+x=[3,1,4,1,5]. Note that we are not allowed to choose x=[3,1,1] and y=[4,5], neither are we allowed to choose x=[1,3] and y=[5,1,4], as both these choices do not satisfy a=x+y.

  Input
  Each test contains multiple test cases. The first line contains the number of test cases t (1 ≤ t ≤ 1000). The description of the test cases follows.

  The first line of each test case contains a single integer n (2 ≤ n ≤ 50) — the length of the array a.

  The second line of each test case contains n integers a1,a2,…,an (1 ≤ ai ≤ 10^6) — the elements of array a.

  Output
  For each test case, output "Yes" if a could become non-decreasing after performing the operation any number of times, and output "No" if not.

  You can output "Yes" and "No" in any case (for example, strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive response).
*/
#include <bits/stdc++.h>
using namespace std;
int a[222222];
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, f{0};
    cin >> n;
    for (int i = 1; i <= n && cin >> a[i]; i++)
    {
      if (a[i] < a[i - 1])
        f++;
    }
    if (a[n] > a[1])
      f++;
    if (f > 1)
      cout << "NO\n";
    else
      cout << "YES\n";
  }
}