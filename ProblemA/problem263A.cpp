// https://codeforces.com/problemset/problem/263/A
// A. Beautiful Matrix
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// You've got a 5 × 5 matrix, consisting of 24 zeroes and a single number one. Let's index the matrix rows 
// by numbers from 1 to 5 from top to bottom, let's index the matrix columns by numbers from 1 to 5 from left to right. 
// In one move, you are allowed to apply one of the two following transformations to the matrix:

// Swap two neighboring matrix rows, that is, rows with indexes i and i + 1 for some integer i (1 ≤ i < 5).
// Swap two neighboring matrix columns, that is, columns with indexes j and j + 1 for some integer j (1 ≤ j < 5).
// You think that a matrix looks beautiful, if the single number one of the matrix is located in its middle 
// (in the cell that is on the intersection of the third row and the third column). Count the minimum number of moves needed to make the matrix beautiful.

// Input
// The input consists of five lines, each line contains five integers: the j-th integer in the i-th line of the input 
// represents the element of the matrix that is located on the intersection of the i-th row and the j-th column. 
// It is guaranteed that the matrix consists of 24 zeroes and a single number one.

// Output
// Print a single integer — the minimum number of moves needed to make the matrix beautiful.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int a[5][5], b, c;
  FOR(i, 0, 5) {
    FOR(j, 0, 5) {
      cin >> a[i][j];
      if(a[i][j] == 1) {
        b = i;
        c = j;
      }
    }
  }
  cout << abs(b - 2) + abs(c - 2);

  return 0;
}