/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 03-08-2024
*/
/*
  https://codeforces.com/problemset/problem/1995/A
  A. Diagonals
  time limit per test: 1 second
  memory limit per test: 256 megabytes

  Vitaly503 is given a checkered board with a side of n and k chips. He realized that all these k chips need to be placed on the cells of the board 
  (no more than one chip can be placed on a single cell).

  Let's denote the cell in the i-th row and j-th column as (i,j). A diagonal is the set of cells for which the value i+j is the same. 
  For example, cells (3,1), (2,2), and (1,3) lie on the same diagonal, but (1,2) and (2,3) do not. 
  A diagonal is called occupied if it contains at least one chip.

  Determine what is the minimum possible number of occupied diagonals among all placements of k chips.

  Input
  Each test consists of several sets of input data. The first line contains a single integer t (1 ≤ t ≤ 500) — the number of sets of input data. 
  Then follow the descriptions of the sets of input data.

  The only line of each set of input data contains two integers n, k (1 ≤ n ≤ 100,0 ≤ k ≤ n^2) — the side of the checkered board and the number of available chips, respectively.

  Output
  For each set of input data, output a single integer — the minimum number of occupied diagonals with at least one chip that he can get after placing all k chips.
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
    int n, k;
    cin >> n >> k;
    if(k == 0) cout << 0 << "\n";
    else if(k % (n * n) == 0) cout << 2 * n - 1 << "\n";
    else {
      int cnt = 1;
      k = k - n;
      while(k > 0) {
        n--;
        if(k > n * 2) {
          k -= n * 2;
          cnt += 2;
        } else if(k > n) {
          k -= n * 2;
          cnt += 2;
        } else {
          k -= n;
          cnt++;
        }
      }
      cout << cnt << "\n";
    }
  }
  
  return 0;
}