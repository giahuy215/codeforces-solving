/*
  Author : Nguyen Duc Gia Huy
*/
/*
  B. Jumping Jack
  time limit per test: 1 second
  memory limit per test: 64 megabytes
  input: standard input
  output: standard output

  Jack is working on his jumping skills recently. Currently he's located at point zero of the number line. 
  He would like to get to the point x. In order to train, he has decided that he'll first jump by only one unit, and each subsequent jump will be exactly one longer than the previous one. 
  He can go either left or right with each jump. He wonders how many jumps he needs to reach x.

  Input
  The input data consists of only one integer x ( - 1e9 ≤ x ≤ 1e9).

  Output
  Output the minimal number of jumps that Jack requires to reach x.
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
  ll n = 0, x, sum = 0;
  cin >> x;
  x = abs(x);
  if(x == 0) {
    cout << 0;
    return 0;
  }
  while(sum < x || sum % 2 != x % 2) {
    n++;
    sum += n;
  }
  cout << n;

  return 0;
}