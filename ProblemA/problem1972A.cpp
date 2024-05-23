/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1972/A
  A. Contest Proposal
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  A contest contains n problems and the difficulty of the i-th problem is expected to be at most bi. There are already n problem proposals and the difficulty of the i-th problem is ai. 
  Initially, both a1,a2,…,an and b1,b2,…,bn are sorted in non-decreasing order.

  Some of the problems may be more difficult than expected, so the writers must propose more problems. 
  When a new problem with difficulty w is proposed, the most difficult problem will be deleted from the contest, and the problems will be sorted in a way that the difficulties are non-decreasing.

  In other words, in each operation, you choose an integer w, insert it into the array a, sort array a in non-decreasing order, and remove the last element from it.

  Find the minimum number of new problems to make ai ≤ bi for all i.

  Input
  Each test contains multiple test cases. The first line contains the number of test cases t (1 ≤ t ≤ 100). The description of the test cases follows.

  The first line of each test case contains only one positive integer n (1 ≤ n ≤ 100), representing the number of problems.

  The second line of each test case contains an array a of length n (1 ≤ a1 ≤ a2 ≤ ⋯ ≤ an ≤ 10^9).

  The third line of each test case contains an array b of length n (1 ≤ b1 ≤ b2 ≤ ⋯ ≤ bn ≤ 10^9).

  Output
  For each test case, print an integer as your answer in a new line.
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
    int n, cnt = 0; 
    cin >> n;
    vector<int> a, b;
    FOR(i, 0, n) {
      int x; cin >> x;
      a.push_back(x);
    }
    FOR(i, 0, n) {
      int x; cin >> x;
      b.push_back(x);
    }
    FOR(i, 0, n) {
      if(a[i] > b[i]) {
        a.insert(a.begin() + i, b[i]);
        a.pop_back();
        cnt++;
      }
    }
    cout << cnt << endl;
  }
  
  return 0;
}