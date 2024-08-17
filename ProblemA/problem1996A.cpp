/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 17-08-2024
*/
/*
  https://codeforces.com/problemset/problem/1996/A
  A. Legs
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  It's another beautiful day on Farmer John's farm.

  After Farmer John arrived at his farm, he counted n legs. It is known only chickens and cows live on the farm, and a chicken has 2 legs while a cow has 4.

  What is the minimum number of animals Farmer John can have on his farm assuming he counted the legs of all animals?

  Input
  The first line contains single integer t (1 ≤ t ≤ 10^3) — the number of test cases.

  Each test case contains an integer n (2 ≤ n ≤ 2⋅10^3, n is even).

  Output
  For each test case, output an integer, the minimum number of animals Farmer John can have on his farm.
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
    int n;
    cin >> n;
    if (n % 4 == 0) cout << n / 4 << endl;
    else cout << n / 4 + 1 << endl; 
  }
  
  return 0;
} 