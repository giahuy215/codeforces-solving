// https://codeforces.com/problemset/problem/750/A
// A. New Year and Hurry
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Limak is going to participate in a contest on the last day of the 2016. The contest will start at 20:00 and will last four hours, 
// exactly until midnight. There will be n problems, sorted by difficulty, i.e. problem 1 is the easiest and problem n is the hardest. 
// Limak knows it will take him 5·i minutes to solve the i-th problem.

// Limak's friends organize a New Year's Eve party and Limak wants to be there at midnight or earlier. 
// He needs k minutes to get there from his house, where he will participate in the contest first.

// How many problems can Limak solve if he wants to make it to the party?

// Input
// The only line of the input contains two integers n and k (1 ≤ n ≤ 10, 1 ≤ k ≤ 240) — the number of the problems 
// in the contest and the number of minutes Limak needs to get to the party from his house.

// Output
// Print one integer, denoting the maximum possible number of problems Limak can solve so that he could get to the party at midnight 
// or earlier.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, k, sum = 0;
  cin>>n>>k;
  int m = 240 - k;
  FOR(i,1,n+1) {
    sum += i * 5;
    if(sum > m) {
      cout<<i - 1;
      return 0;
    }
  }
  cout<<n;
  return 0;
}