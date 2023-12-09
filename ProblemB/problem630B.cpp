// https://codeforces.com/contest/630/problem/B
// B. Moore's Law
// time limit per test: 0.5 seconds
// memory limit per test: 64 megabytes
// input: standard input
// output: standard output

// The city administration of IT City decided to fix up a symbol of scientific and technical progress in the city's main square, 
// namely an indicator board that shows the effect of Moore's law in real time.

// Moore's law is the observation that the number of transistors in a dense integrated circuit doubles approximately every 24 months. 
// The implication of Moore's law is that computer performance as function of time increases exponentially as well.

// You are to prepare information that will change every second to display on the indicator board. 
// Let's assume that every second the number of transistors increases exactly 1.000000011 times.

// Input
// The only line of the input contains a pair of integers n (1000 ≤ n ≤ 10 000) and t (0 ≤ t ≤ 2 000 000 000) — the number of transistors in the initial time 
// and the number of seconds passed since the initial time.

// Output
// Output one number — the estimate of the number of transistors in a dence integrated circuit in t seconds since the initial time. 
// The relative error of your answer should not be greater than 10^(- 6).
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  double n, t;
  cin >> n >> t;
  cout << setprecision(10) << fixed << n * pow(1.000000011, t);

  return 0;
}