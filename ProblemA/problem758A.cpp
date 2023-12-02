// https://codeforces.com/problemset/problem/758/A
// A. Holiday Of Equality
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// In Berland it is the holiday of equality. In honor of the holiday the king decided to equalize the welfare of all citizens in Berland 
// by the expense of the state treasury.

// Totally in Berland there are n citizens, the welfare of each of them is estimated as the integer in ai burles 
// (burle is the currency in Berland).

// You are the royal treasurer, which needs to count the minimum charges of the kingdom on the king's present. 
// The king can only give money, he hasn't a power to take away them.

// Input
// The first line contains the integer n (1 ≤ n ≤ 100) — the number of citizens in the kingdom.

// The second line contains n integers a1, a2, ..., an, where ai (0 ≤ ai ≤ 10^6) — the welfare of the i-th citizen.

// Output
// In the only line print the integer S — the minimum number of burles which are had to spend.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, max = 0, count = 0;
  cin>>n;
  if(n == 1) {
    cout<<0;
    return 0;
  }
  vector<int> a(n);
  FOR(i,0,n) {
    cin>>a[i];
    if(a[i] > max) max = a[i];
  }
  FOR(i,0,n) {
    count += max - a[i];
  }
  cout<<count;
  return 0;
}