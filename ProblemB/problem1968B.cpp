/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1968/problem/B
  B. Prefiquence
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  You are given two binary strings a and b. A binary string is a string consisting of the characters '0' and '1'.

  Your task is to determine the maximum possible number k such that a prefix of string a of length k is a subsequence of string b.

  A sequence a is a subsequence of a sequence b if a can be obtained from b by the deletion of several (possibly, zero or all) elements.

  Input
  The first line consists of a single integer t (1 ≤ t ≤ 10^4) — the number of test cases.

  The first line of each test case contains two integers n and m (1 ≤ n,m ≤ 2⋅10^5) — the length of string a and the length of string b, respectively.

  The second line of each test case contains a binary string a of length n.

  The third line of each test case contains a binary string b of length m.

  It is guaranteed that the sum of values n over all test cases does not exceed 2⋅10^5. Similarly, the sum of values m over all test cases does not exceed 2⋅10^5.

  Output
  For each test case, output a single number — the maximum k, such that the first k characters of a form a subsequence of b.
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
  while(t--) {
    int n, m, cnt = 0, i = 0, j = 0;
    string a, b;
    cin >> n >> m >> a >> b;
    while(i < n && j < m) {
      if(a[i] == b[j]) {
        cnt++;
        i++;
      }
      j++;
    }
    cout << cnt << endl;
  }
  
  return 0;
}