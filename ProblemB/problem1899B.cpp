// https://codeforces.com/contest/1899/problem/B
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Alex is participating in the filming of another video of BrMeast, and BrMeast asked Alex to prepare 250 thousand tons of TNT, 
// but Alex didn't hear him well, so he prepared n boxes and arranged them in a row waiting for trucks. The i-th box from the left weighs ai tons.
// All trucks that Alex is going to use hold the same number of boxes, denoted by k. Loading happens the following way:
// - The first k boxes goes to the first truck,
// - The second k boxes goes to the second truck,
// - ...
// - The last k boxes goes to the n/k-th truck.

// Upon loading is completed, each truck must have exactly k boxes. In other words, if at some point it is not possible to load exactly k
// boxes into the truck, then the loading option with that k is not possible.

// Alex hates justice, so he wants the maximum absolute difference between the total weights of two trucks to be as great as possible. 
// If there is only one truck, this value is 0.

// Alex has quite a lot of connections, so for every 1 ≤ k ≤ n, he can find a company such that each of its trucks can hold exactly k
// boxes. Print the maximum absolute difference between the total weights of any two trucks.
// Input
// The first line contains one integer t(1 ≤ t ≤ 104) — the number of test cases.
// The first line of each test case contains one integer n (1 ≤ n ≤ 150000) — the number of boxes.
// The second line contains n integers a1,a2,…,an (1 ≤ ai ≤ 109) — the weights of the boxes.
// It is guaranteed that the sum of n for all test cases does not exceed 150000.
// Output
// For each test case, print a single integer — the answer to the problem.
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
    int n;
    cin>>n;
    ll s[150005];
    s[0] = 0;
    ll a[n+1];
    for(int i = 1; i <= n; i++) {
      cin>>a[i];
      s[i] = s[i-1] + a[i];
    }
    ll res = 0;
    for(int i = 1; i <= n; i++) {
      if(n % i == 0) {
        ll mx=-1e18, mn=1e18;
        for(int j = 1; j <=n; j+=i) {
          mx = max(mx, s[j + i - 1] - s[j - 1]);
          mn = min(mn, s[j + i - 1] - s[j - 1]);
        }
        res = max(res, mx-mn);
      }
    }
    cout<<res<<endl;
  }

  return 0;
}