/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 30-07-2024
*/
/*
  https://codeforces.com/problemset/problem/1994/A
  A. Diverse Game
  time limit per test: 1 second
  memory limit per test: 256 megabytes

  Petr, watching Sergey's stream, came up with a matrix a, consisting of n rows and m columns (the number in the i-th row and j-th column is denoted as ai,j), 
  which contains all integers from 1 to n⋅m. But he didn't like the arrangement of the numbers, and now he wants to come up with a new matrix b, consisting of n rows and m columns, 
  which will also contain all integers from 1 to n⋅m, such that for any 1 ≤ i ≤ n,1 ≤ j ≤ m it holds that ai,j≠bi,j.

  You are given the matrix a, construct any matrix b that meets Petr's requirements, or determine that it is impossible.

  Hurry up! Otherwise, he will donate all his money to the stream in search of an answer to his question.

  Input
  Each test consists of multiple test cases. The first line contains an integer t (1 ≤ t ≤ 10^3) — the number of test cases. 
  Then follows the description of the test cases.

  The first line of each test case contains two integers n and m (1 ≤ n,m ≤ 10) — the number of rows and columns of matrix a.

  The next n lines contain m integers each, describing matrix a. The i-th of these lines contains the elements of matrix ai,1,ai,2,…,ai,m.

  It is guaranteed that all numbers in matrix a are distinct and 1 ≤ ai,j ≤ n⋅m.

  It is guaranteed that the sum of n⋅m over all test cases does not exceed 5⋅10^4.

  Output
  For each test case, output n⋅m integers — any suitable matrix b, or −1 if such a matrix does not exist.
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
    int n, m, cnt = 0;
    cin >> n >> m;
    int a[n * m];
    for(int i = 0; i < n * m; i++) {
      cin >> a[i];
    }
    if(n * m == 1) {
      cout << -1 << "\n";
      continue;
    }
    for(int i = 1; i < n * m; i++) {
      cout << a[i] << " ";
      cnt++;
      if(cnt == m) {
        cout << "\n";
        cnt = 0;
      }
    }
    cout << a[0] << "\n";
  }
  
  return 0;
}