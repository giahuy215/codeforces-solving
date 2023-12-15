// https://codeforces.com/problemset/problem/200/B
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Little Vasya loves orange juice very much. That's why any food and drink in his kitchen necessarily contains orange juice. 
// There are n drinks in his fridge, the volume fraction of orange juice in the i-th drink equals pi percent.

// One day Vasya decided to make himself an orange cocktail. He took equal proportions of each of the n drinks and mixed them. 
// Then he wondered, how much orange juice the cocktail has.

// Find the volume fraction of orange juice in the final drink.

// Input
// The first input line contains a single integer n (1 ≤ n ≤ 100) — the number of orange-containing drinks in Vasya's fridge. 
// The second line contains n integers pi (0 ≤ pi ≤ 100) — the volume fraction of orange juice in the i-th drink, in percent. 
// The numbers are separated by a space.

// Output
// Print the volume fraction in percent of orange juice in Vasya's cocktail. 
// The answer will be considered correct if the absolute or relative error does not exceed 1e-4.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  float sum = 0;
  cin >> n;
  FOR(i, 0, n) {
    int a;
    cin >> a;
    sum += a;
  }
  cout << setprecision(5) << fixed << sum / n;

  return 0;
}