/*
  Author: Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/26/A
  A. Almost Prime
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  A number is called almost prime if it has exactly two distinct prime divisors. For example, numbers 6, 18, 24 are almost prime, while 4, 8, 9, 42 are not. 
  Find the amount of almost prime numbers which are between 1 and n, inclusive.

  Input
  Input contains one integer number n (1 ≤ n ≤ 3000).

  Output
  Output the amount of almost prime numbers between 1 and n, inclusive.
*/
#include <iostream>
using namespace std;
int a[100001],k,n;
int main(){
  cin>>n;
  for(int i = 2; i <= n; i++) {
    if(a[i]==0)
    for(int j = i; j <= n; j += i) a[j]++;
    if(a[i]==2)
    k++;
  }
  cout<<k;

  return 0;
}