// https://codeforces.com/problemset/problem/158/A
// A. Next Round
// time limit per test: 3 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// "Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round, as long as the contestant earns a positive score..." — an excerpt from contest rules.

// A total of n participants took part in the contest (n ≥ k), and you already know their scores. Calculate how many participants will advance to the next round.

// Input
// The first line of the input contains two integers n and k (1 ≤ k ≤ n ≤ 50) separated by a single space.

// The second line contains n space-separated integers a1, a2, ..., an (0 ≤ ai ≤ 100), where ai is the score earned by the participant who got the i-th place. The given sequence is non-increasing (that is, for all i from 1 to n - 1 the following condition is fulfilled: ai ≥ ai + 1).

// Output
// Output the number of participants who advance to the next round.
#include<iostream>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)
using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);
  int n,k;
  int count = 0;
  cin>>n>>k;
  int a[n];

  FOR(i,0,n) {
    cin>>a[i];
  }

  ROF(i,0,n) {
    int stand;
    if(i == k-1) {
      stand = a[i];
      count++;
    }
    if(i < k-1 && a[i] >= stand && a[i] != 0) {
      count++;
    }
  }

  FOR(i,0,n) {
    int stand;
    if(i == k-1 && a[i] == 0) {
      count--;
    }
    if(i == k-1) {
      stand = a[i];
    }
    if(i > k-1 && a[i] == stand && stand !=0) {
      count++;
    }
  }

  cout<<count;
  return 0;
}