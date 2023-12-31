/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1914/B
  B. Preparing for the Contest
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Monocarp is practicing for a big contest. He plans to solve n problems to make sure he's prepared. 
  Each of these problems has a difficulty level: the first problem has a difficulty level of 1, the second problem has a difficulty level of 2, 
  and so on, until the last (n-th) problem, which has a difficulty level of n.

  Monocarp will choose some order in which he is going to solve all n problems. Whenever he solves a problem which is more difficult than the last problem he solved, 
  he gets excited because he feels like he's progressing. He doesn't get excited when he solves the first problem in his chosen order.

  For example, if Monocarp solves the problems in the order [3,5,4,1,6,2], he gets excited twice (the corresponding problems are underlined).

  Monocarp wants to get excited exactly k times during his practicing session. Help him to choose the order in which he has to solve the problems!

  Input
  The first line contains one integer t (1 ≤ t ≤ 1000) — the number of test cases.

  Each test case consists of one line containing two integers n and k (2 ≤ n ≤ 50; 0 ≤ k ≤ n−1).

  Output
  For each test case, print n distinct integers from 1 to n, denoting the order in which Monocarp should solve the problems. If there are multiple answers, print any of them.

  It can be shown that under the constraints of the problem, the answer always exists.
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    for(int i = n - k; i > 0; i--) {
      cout << i << " ";
    }
    for(int i = n - k + 1; i <= n; i++) {
      cout << i << " ";
    }
    cout << endl;
  }

  return 0;
}