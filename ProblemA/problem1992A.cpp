/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 13-07-2024
*/
/*
  https://codeforces.com/problemset/problem/1992/A
  A. Only Pluses
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  Kmes has written three integers a, b and c in order to remember that he has to give Noobish_Monk a × b × c bananas.

  Noobish_Monk has found these integers and decided to do the following at most 5 times:

  - pick one of these integers;
  - increase it by 1.
  For example, if a = 2, b = 3 and c = 4, then one can increase a three times by one and increase b two times. 
  After that a = 5, b = 5, c = 4. Then the total number of bananas will be 5 × 5 × 4 = 100.

  What is the maximum value of a × b × c Noobish_Monk can achieve with these operations?

  Input
  Each test contains multiple test cases. The first line of input contains a single integer t (1 ≤ t ≤ 1000) — the number of test cases. The description of the test cases follows.

  The first and only line of each test case contains three integers a, b and c (1 ≤ a,b,c ≤ 10) — Kmes's integers.

  Output
  For each test case, output a single integer — the maximum amount of bananas Noobish_Monk can get.
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while(t--) {
    int a[3], i = 5;
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    while(i--) {
      if(a[0] < a[1]) a[0]++;
      else if(a[1] < a[2]) a[1]++;
      else a[2]++;
    }
    cout << a[0] * a[1] * a[2] << endl;
  }
  
  return 0;
}