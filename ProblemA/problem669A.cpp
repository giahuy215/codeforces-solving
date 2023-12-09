// https://codeforces.com/problemset/problem/669/A
// A. Little Artem and Presents
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output

// Little Artem got n stones on his birthday and now wants to give some of them to Masha. 
// He knows that Masha cares more about the fact of receiving the present, rather than the value of that present, 
// so he wants to give her stones as many times as possible. However, Masha remembers the last present she received, 
// so Artem can't give her the same number of stones twice in a row. For example, he can give her 3 stones, then 1 stone, 
// then again 3 stones, but he can't give her 3 stones and then again 3 stones right after that.

// How many times can Artem give presents to Masha?

// Input
// The only line of the input contains a single integer n (1 ≤ n ≤ 10^9) — number of stones Artem received on his birthday.

// Output
// Print the maximum possible number of times Artem can give presents to Masha.
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  if(n < 3) {
    cout << 1;
    return 0;
  }
  if(n % 3 == 0) {
    cout << 2 * (n / 3);
    return 0;
  } else {
    cout << 2 * (n / 3) + 1;
  }

  return 0;
}