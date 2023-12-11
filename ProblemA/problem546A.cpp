// https://codeforces.com/problemset/problem/546/A
// A. Soldier and Bananas
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// A soldier wants to buy w bananas in the shop. He has to pay k dollars for the first banana, 2k dollars for the second one and so on 
// (in other words, he has to pay i·k dollars for the i-th banana).

// He has n dollars. How many dollars does he have to borrow from his friend soldier to buy w bananas?

// Input
// The first line contains three positive integers k, n, w (1  ≤  k, w  ≤  1000, 0 ≤ n ≤ 10^9), the cost of the first banana, 
// initial number of dollars the soldier has and number of bananas he wants.

// Output
// Output one integer — the amount of dollars that the soldier must borrow from his friend. If he doesn't have to borrow money, output 0.
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int k, n, w;
  cin >> k >> n >> w;
  if((1 + w) * w / 2 * k > n) {
    cout << (1 + w) * w / 2 * k - n; 
  } else {
    cout << 0;
  }

  return 0;
}