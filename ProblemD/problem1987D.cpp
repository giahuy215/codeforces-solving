/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 10-07-2024
  Have seen tutorial on this problem
*/
/*
  https://codeforces.com/problemset/problem/1987/D
  D. World is Mine
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Alice and Bob are playing a game. Initially, there are n cakes, with the i-th cake having a tastiness value of ai.

  Alice and Bob take turns eating them, with Alice starting first:

  - In her turn, Alice chooses and eats any remaining cake whose tastiness is strictly greater than the maximum tastiness of any of the cakes she's eaten before that. 
  Note that on the first turn, she can choose any cake.
  - In his turn, Bob chooses any remaining cake and eats it.
  The game ends when the current player can't eat a suitable cake. 
  Let x be the number of cakes that Alice ate. Then, Alice wants to maximize x, while Bob wants to minimize x.

  Find out how many cakes Alice will eat if both players play optimally.

  Input
  Each test contains multiple test cases. The first line of input contains a single integer t (1 ≤ t ≤ 500) — the number of test cases. The description of the test cases follows.

  The first line of each test case contains a single integer n (1 ≤ n ≤ 5000) — the number of cakes.

  The second line of each test case contains n integers a1,a2,…,an (1 ≤ ai ≤ n) — the tastiness values of the cakes.

  It is guaranteed that the sum of n over all test cases does not exceed 5000.

  Output
  For each test case, output a single integer — the number of cakes Alice will eat if both players play optimally.
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);
    for(int i = 0; i < n; i ++) {
      int a; cin >> a;
      v[a]++;
    }
    priority_queue<int> q;
    int sum = 0, valid = 0;
    for(int x : v) if(x) {
      valid++;
      sum += x + 1;
      q.push(x + 1);
      while(sum > valid) {
        sum -= q.top();
        q.pop();
      }
    }
    cout << valid - q.size() << endl;
  }
  
  return 0;
}