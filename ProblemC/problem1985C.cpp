/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 23-06-2024
*/
/*
  https://codeforces.com/problemset/problem/1985/C
  C. Good Prefixes
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Alex thinks some array is good if there exists some element that can be represented as the sum of all other elements 
  (the sum of all other elements is 0 if there are no other elements). For example, the array [1,6,3,2] is good since 1+3+2=6. 
  Furthermore, the array [0] is also good. However, the arrays [1,2,3,4] and [1] are not good.

  Alex has an array a1,a2,…,an. Help him count the number of good non-empty prefixes of the array a. 
  In other words, count the number of integers i (1 ≤ i ≤ n) such that the length i prefix (i.e. a1,a2,…,ai) is good.

  Input
  The first line of the input contains a single integer t (1 ≤ t ≤ 10^4) — the number of test cases.

  The first line of each test case contains a single integer n (1 ≤ n ≤ 2⋅10^5) — the number of elements in the array.

  The second line of each test case contains n integers a1,a2,…,an (0 ≤ ai ≤ 10^9) — the elements of the array.

  It is guaranteed that the sum of n over all test cases does not exceed 2⋅10^5.

  Output
  For each test case, output a single integer — the number of good non-empty prefixes of the array a.
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
    ll n, mx = 0, sum = 0, cnt = 0;
    cin >> n;
    ll a[n];
    map<ll, ll> mp;
    for(ll i = 0; i < n; i++) {
      cin >> a[i];
      mp[a[i]]++;
      if(a[i] > mx) mx = a[i];
      sum += a[i];
      if(sum - mx == mx) cnt++;
    }
    cout << cnt << "\n";
  }
  
  return 0;
}