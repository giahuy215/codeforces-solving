// https://codeforces.com/problemset/problem/746/A
// A. Compote
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Nikolay has a lemons, b apples and c pears. He decided to cook a compote. 
// According to the recipe the fruits should be in the ratio 1: 2: 4. 
// It means that for each lemon in the compote should be exactly 2 apples and exactly 4 pears. 
// You can't crumble up, break up or cut these fruits into pieces. 
// These fruits — lemons, apples and pears — should be put in the compote as whole fruits.

// Your task is to determine the maximum total number of lemons, apples and pears from which Nikolay can cook the compote. 
// It is possible that Nikolay can't use any fruits, in this case print 0.

// Input
// The first line contains the positive integer a (1 ≤ a ≤ 1000) — the number of lemons Nikolay has.

// The second line contains the positive integer b (1 ≤ b ≤ 1000) — the number of apples Nikolay has.

// The third line contains the positive integer c (1 ≤ c ≤ 1000) — the number of pears Nikolay has.

// Output
// Print the maximum total number of lemons, apples and pears from which Nikolay can cook the compote.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int a,b,c;
  cin>>a>>b>>c;
  if(a < 1 || b < 2 || c < 4) {
    cout<<0;
    return 0;
  }
  cout<<min({a, b/2, c/4})*7;
  return 0;
}