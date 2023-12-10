// https://codeforces.com/problemset/problem/599/A
// A. Patrick and Shopping
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Today Patrick waits for a visit from his friend Spongebob. To prepare for the visit, Patrick needs to buy some goodies in 
// two stores located near his house. There is a d1 meter long road between his house and the first shop and a d2 meter long road 
// between his house and the second shop. Also, there is a road of length d3 directly connecting these two shops to each other. 
// Help Patrick calculate the minimum distance that he needs to walk in order to go to both shops and return to his house.


// Patrick always starts at his house. He should visit both shops moving only along the three existing roads and return back to his house. 
// He doesn't mind visiting the same shop or passing the same road multiple times. The only goal is to minimize the total distance traveled.

// Input
// The first line of the input contains three integers d1, d2, d3 (1 ≤ d1, d2, d3 ≤ 10^8) — the lengths of the paths.

// d1 is the length of the path connecting Patrick's house and the first shop;
// d2 is the length of the path connecting Patrick's house and the second shop;
// d3 is the length of the path connecting both shops.
// Output
// Print the minimum distance that Patrick will have to walk in order to visit both shops and return to his house.
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int a, b, c;
  cin >> a >> b >> c;
  cout << min((a + b + c), min({2*(a + c),2*(a + b),2*(b + c)}));

  return 0;
}