// https://codeforces.com/problemset/problem/629/A
// A. Far Relative’s Birthday Cake
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Door's family is going celebrate Famil Doors's birthday party. They love Famil Door so they are planning to make his birthday cake weird!

// The cake is a n × n square consisting of equal squares with side length 1. Each square is either empty or consists of a single chocolate. 
// They bought the cake and randomly started to put the chocolates on the cake. 
// The value of Famil Door's happiness will be equal to the number of pairs of cells with chocolates that are in the same row or in the same column of the cake. 
// Famil Doors's family is wondering what is the amount of happiness of Famil going to be?

// Please, note that any pair can be counted no more than once, as two different cells can't share both the same row and the same column.

// Input
// In the first line of the input, you are given a single integer n (1 ≤ n ≤ 100) — the length of the side of the cake.

// Then follow n lines, each containing n characters. Empty cells are denoted with '.', while cells that contain chocolates are denoted by 'C'.

// Output
// Print the value of Famil Door's happiness, i.e. the number of pairs of chocolate pieces that share the same row or the same column.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, row[101], col[101], sum = 0;
  FOR(i, 0, 101) {
    row[i] = 0;
    col[i] = 0;
  }
  cin >> n;
  FOR(i, 0 , n*n) {
    char s;
    cin >> s;
    if(s == 'C') {
      sum += row[i / n]++;
      sum += col[i % n]++;
    }
  }
  cout << sum;
  return 0;
}