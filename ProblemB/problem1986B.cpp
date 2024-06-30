/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 30-06-2024
*/
/*
  https://codeforces.com/problemset/problem/1986/B
  B. Matrix Stabilization
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  You are given a matrix of size n × m, where the rows are numbered from 1 to n from top to bottom, and the columns are numbered from 1 to m from left to right. 
  The element at the intersection of the i-th row and the j-th column is denoted by aij.

  Consider the algorithm for stabilizing matrix a:- 

  - Find the cell (i,j) such that its value is strictly greater than the values of all its neighboring cells. If there is no such cell, terminate the algorithm. 
  If there are multiple such cells, choose the cell with the smallest value of i, and if there are still multiple cells, choose the one with the smallest value of j.
  - Set aij = aij − 1.
  - Go to step 1.
  In this problem, cells (a,b) and (c,d) are considered neighbors if they share a common side, i.e., |a − c|+|b − d| = 1.

  Your task is to output the matrix a after the stabilization algorithm has been executed. It can be shown that this algorithm cannot run for an infinite number of iterations.

  Input
  Each test consists of multiple sets of input data. The first line contains a single integer t (1 ≤ t ≤ 10^4) — the number of sets of input data. This is followed by their description.

  The first line of each set of input data contains two integers n and m (1 ≤ n,m ≤ 100,n ⋅ m > 1) — the number of rows and columns of matrix a.

  The next n lines describe the corresponding rows of the matrix. The i-th line contains m integers ai1,ai2,…,aim (1 ≤ aij ≤ 10^9).

  It is guaranteed that the sum of n⋅m over all sets of input data does not exceed 2⋅10^5.

  Output
  For each set of input data, output n lines with m numbers in each line — the values of the cells of matrix a after the stabilization algorithm
*/
#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while(t--) {
    int n, m;
    cin >> n >> m;
    int a[n + 2][m + 2] {0};
    for(int i = 1; i <= m + 1; i++) a[0][i] = 0;
    for(int i = 1; i <= n; i++) {
      for(int j = 1; j <= m; j++) {
        cin >> a[i][j];
      }
    }

    for(int i = 1; i <= n; i++) {
      for(int j = 1; j <= m; j++) {
        cout << min(a[i][j], max({a[i - 1][j], a[i][j - 1], a[i + 1][j], a[i][j + 1]})) << " ";
      }
      cout << "\n";
    }
  }
  
  return 0;
}