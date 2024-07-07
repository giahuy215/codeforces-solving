/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 07-07-2024
*/
/*
  https://codeforces.com/problemset/problem/1979/B
  B. XOR Sequences
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  You are given two distinct non-negative integers x and y. Consider two infinite sequences a1,a2,a3,… and b1,b2,b3,…, where
  - an = n ⊕ x;
  - bn = n ⊕ y.
  Here, x ⊕ y denotes the bitwise XOR operation of integers x and y.

  For example, with x = 6, the first 8 elements of sequence a will look as follows: [7,4,5,2,3,0,1,14,…]. 
  Note that the indices of elements start with 1.

  Your task is to find the length of the longest common subsegment† of sequences a and b. 
  In other words, find the maximum integer m such that ai = bj,ai+1 = bj+1,…,ai+m−1 = bj+m−1 for some i,j ≥ 1.

  †A subsegment of sequence p is a sequence pl,pl+1,…,pr, where 1 ≤ l ≤ r.

  Input
  Each test consists of multiple test cases. The first line contains a single integer t (1 ≤ t ≤ 10^4) — the number of test cases. The description of the test cases follows.

  The only line of each test case contains two integers x and y (0 ≤ x,y ≤ 10^9,x ≠ y) — the parameters of the sequences.

  Output
  For each test case, output a single integer — the length of the longest common subsegment.
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
    int a, b;
    cin >> a >> b;
    for(int i = 0; i < 30; i++) {
      if((a & (1 << i)) != (b & (1 << i))) {
        cout << (1ll << i) << "\n";
        break;
      }
    }
  }
  
  return 0;
}