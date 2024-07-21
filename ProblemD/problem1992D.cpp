/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 21-07-2024
*/
/*
  https://codeforces.com/contest/1992/problem/D
  D. Test of Love
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  ErnKor is ready to do anything for Julen, even to swim through crocodile-infested swamps. We decided to test this love. 
  ErnKor will have to swim across a river with a width of 1 meter and a length of n meters.

  The river is very cold. Therefore, in total (that is, throughout the entire swim from 0 to n+1) ErnKor can swim in the water for no more than k meters. 
  For the sake of humanity, we have added not only crocodiles to the river, but also logs on which he can jump. Our test is as follows:

  Initially, ErnKor is on the left bank and needs to reach the right bank. They are located at the 0 and n+1 meters respectively. 
  The river can be represented as n segments, each with a length of 1 meter. Each segment contains either a log 'L', a crocodile 'C', or just water 'W'. 
  ErnKor can move as follows:

  - If he is on the surface (i.e., on the bank or on a log), he can jump forward for no more than m (1 ≤ m ≤ 10) meters (he can jump on the bank, on a log, or in the water).
  - If he is in the water, he can only swim to the next river segment (or to the bank if he is at the n-th meter).
  - ErnKor cannot land in a segment with a crocodile in any way.
  Determine if ErnKor can reach the right bank.

  Input
  The first line contains a single integer t (1 ≤ t ≤ 10^4)  — the number of test cases.

  The first line of each test case contains three numbers n,m,k (0 ≤ k ≤ 2⋅10^5, 1 ≤ n ≤ 2⋅10^5, 1 ≤ m ≤ 10) — the length of the river, the distance ErnKor can jump, and the number of meters ErnKor can swim without freezing.

  The second line of each test case contains a string a of length n. ai denotes the object located at the i-th meter. (ai∈{'W','C','L'})

  It is guaranteed that the sum of n over all test cases does not exceed 2⋅10^5.

  Output
  For each test case, output "YES" if ErnKor can pass the test, and output "NO" otherwise.

  You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.
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
    int n, m, k, ans = 0, p = 0;
    string s;
    cin >> n >> m >> k >> s;
    for(int i = 0; i < n; i++) {
      if(ans > 0) break;
      switch (s[i])
      {
        case 'L':
          p = i + 1;
          break;
        case 'W':
          if(i + 1 - p >= m && k > 0) k--;
          else if(i + 1 - p >= m && k == 0) ans++;
          else continue;
          break;
        case 'C':
          if(i + 1 - p >= m) ans++;
          else continue;
          break;
        
        default:
          break;
      }
    }
    if(ans > 0) cout << "NO" << "\n";
    else cout << "YES" << "\n";
  }
  
  return 0;
}