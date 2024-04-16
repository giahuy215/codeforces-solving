/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1955/A
  A. Yogurt Sale
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  
  The price of one yogurt at the "Vosmiorochka" store is a burles, but there is a promotion where you can buy two yogurts for b burles.

  Maxim needs to buy exactly n yogurts. When buying two yogurts, he can choose to buy them at the regular price or at the promotion price.

  What is the minimum amount of burles Maxim should spend to buy n yogurts?

  Input
  The first line contains a single integer t (1 ≤ t ≤ 1e4) — the number of test cases.

  The first and only line of each test case contains three integers n, a, and b (1 ≤ n ≤ 100, 1 ≤ a,b ≤ 30) — the number of yogurts Maxim wants to buy, the price for one yogurt, and the price for two yogurts on promotion.

  Output
  For each test case, print in a separate line the minimum cost of buying n yogurts at "Vosmiorochka".
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)
#define all(x) (x).begin(), (x).end()
#define endl "\n"

typedef long long ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int n, a, b;
    cin >> n >> a >> b;
    if(a * 2 < b) {
      cout << n * a << endl;
    } else {
      cout << (n / 2) * b + (n % 2) * a << endl;
    }
  }

  return 0;
}