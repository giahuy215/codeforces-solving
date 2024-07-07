/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 07-07-2024
*/
/*
  https://codeforces.com/problemset/problem/1978/B
  B. New Bakery
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Bob decided to open a bakery. On the opening day, he baked n buns that he can sell. 
  The usual price of a bun is a coins, but to attract customers, Bob organized the following promotion:

  - Bob chooses some integer k (0 ≤ k ≤ min(n,b)).
  - Bob sells the first k buns at a modified price. In this case, the price of the i-th (1 ≤ i ≤ k) sold bun is (b−i+1) coins.
  - The remaining (n−k) buns are sold at a coins each.
  Note that k can be equal to 0. In this case, Bob will sell all the buns at a coins each.

  Help Bob determine the maximum profit he can obtain by selling all n buns.

  Input
  Each test consists of multiple test cases. The first line contains a single integer t (1 ≤ t ≤ 10^4) — the number of test cases. 
  The description of the test cases follows.

  The only line of each test case contains three integers n, a, and b (1 ≤ n,a,b ≤ 10^9) — the number of buns, the usual price of a bun, 
  and the price of the first bun to be sold at a modified price.

  Output
  For each test case, output a single integer — the maximum profit that Bob can obtain.
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
    ll n, a, b;
    cin >> n >> a >> b;
    if(a >= b) cout << n * a << "\n";
    else {
      ll k = min(b - a, n);
      cout << k * b - k * (k - 1) / 2 + (n - k) * a << "\n";
    }
  }
  
  return 0;
}