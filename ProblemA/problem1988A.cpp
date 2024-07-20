/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 20-07-2024
*/
/*
  https://codeforces.com/problemset/problem/1988/A
  A. Split the Multiset
  time limit per test: 1 second
  memory limit per test: 512 megabytes
  input: standard input
  output: standard output

  A multiset is a set of numbers in which there can be equal elements, and the order of the numbers does not matter. 
  For example, {2,2,4} is a multiset.

  You have a multiset S. Initially, the multiset contains only one positive integer n. That is, S={n}. 
  Additionally, there is a given positive integer k.

  In one operation, you can select any positive integer u in S and remove one copy of u from S. 
  Then, insert no more than k positive integers into S so that the sum of all inserted integers is equal to u.

  Find the minimum number of operations to make S contain n ones.

  Input
  Each test contains multiple test cases. The first line contains the number of test cases t (1 ≤ t ≤ 1000). 
  Description of the test cases follows.

  The only line of each testcase contains two integers n,k (1 ≤ n ≤ 1000,2 ≤ k ≤ 1000).

  Output
  For each testcase, print one integer, which is the required answer.
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
    if((n - 1) % (k - 1) == 0) cout << (n - 1) / (k - 1) << "\n";
    else cout << (n - 1) / (k - 1) + 1 << "\n";
  }
  
  return 0;
}