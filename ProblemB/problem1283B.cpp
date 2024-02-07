/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1283/B
  B. Candies Division
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Santa has n candies and he wants to gift them to k kids. He wants to divide as many candies as possible between all k kids. 
  Santa can't divide one candy into parts but he is allowed to not use some candies at all.

  Suppose the kid who recieves the minimum number of candies has a candies and the kid who recieves the maximum number of candies has b candies. 
  Then Santa will be satisfied, if the both conditions are met at the same time:
  - b−a≤1 (it means b = a or b = a + 1);
  - the number of kids who has a+1 candies (note that a+1 not necessarily equals b) does not exceed ⌊k / 2⌋ (less than or equal to ⌊k / 2⌋).
  ⌊k / 2⌋ is k divided by 2 and rounded down to the nearest integer. For example, if k=5 then ⌊k / 2⌋ = ⌊5 / 2⌋ = 2.

  Your task is to find the maximum number of candies Santa can give to kids so that he will be satisfied.

  You have to answer t independent test cases.

  Input
  The first line of the input contains one integer t (1 ≤ t ≤ 5⋅1e4) — the number of test cases.

  The next t lines describe test cases. The i-th test case contains two integers n and k (1 ≤ n,k ≤ 1e9) — the number of candies and the number of kids.

  Output
  For each test case print the answer on it — the maximum number of candies Santa can give to kids so that he will be satisfied.
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
  int t;
  cin >> t;
  while (t--)
  {
    int n, k, sum = 0, t;
    cin >> n >> k;
    sum += (n / k) * k;
    n = n - sum;
    if(n <= k / 2) sum += n;
    else {
      sum += k / 2;
    }
    cout << sum << endl;
  }

  return 0;
}