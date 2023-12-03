// https://codeforces.com/contest/1873/problem/B
// B. Good Kid
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Slavic is preparing a present for a friend's birthday. He has an array a of n digits and the present will be the product of all these digits. 
// Because Slavic is a good kid who wants to make the biggest product possible, he wants to add 1 to exactly one of his digits.

// What is the maximum product Slavic can make?

// Input
// The first line contains a single integer t (1 ≤ t ≤ 10^4) — the number of test cases.

// The first line of each test case contains a single integer n (1 ≤ n ≤ 9) — the number of digits.

// The second line of each test case contains n space-separated integers ai (0 ≤ ai ≤ 9) — the digits in the array.

// Output
// For each test case, output a single integer — the maximum product Slavic can make, by adding 1 to exactly one of his digits.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

typedef long long ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin>>t;
  while (t--) {
    int n, min = 10, count = 0;
    ll ans = 1;
    cin>>n;
    vector<int> a(n);
    FOR(i,0,n) {
      cin>>a[i];
      if(a[i] < min) {
        min = a[i];
        count = 0;
      }
      if(a[i] == min) {
        count++;
      }
    }
    if(min == 0 && count > 1) {
      cout<<0<<endl;
    } else {
      FOR(i,0,n) {
      if(a[i] == 0) a[i] = 1;
        ans *= a[i];
      }
      if(min == 0) {
        cout<<ans<<endl;
      } else {
        cout<<ans/min*(min+1)<<endl;
      }
    }
    
  }
  

  return 0;
}