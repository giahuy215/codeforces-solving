// https://codeforces.com/problemset/problem/151/A
// A. Soft Drinking
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// This winter is so cold in Nvodsk! A group of n friends decided to buy k bottles of a soft drink called "Take-It-Light" to warm up a bit.
// Each bottle has l milliliters of the drink. Also they bought c limes and cut each of them into d slices. 
// After that they found p grams of salt.

// To make a toast, each friend needs nl milliliters of the drink, a slice of lime and np grams of salt. 
// The friends want to make as many toasts as they can, provided they all drink the same amount. How many toasts can each friend make?

// Input
// The first and only line contains positive integers n, k, l, c, d, p, nl, np, not exceeding 1000 and no less than 1. 
// The numbers are separated by exactly one space.

// Output
// Print a single integer — the number of toasts each friend can make.
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k, l, c, d, p, nl, np;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;

  int numtoast = k*l/nl;
  int numlime = c*d;
  int numsalt = p/np;

  if(numtoast < n || numlime < n || numsalt < n) {
    cout<<0;
    return 0;
  }

  cout<<min({numtoast,numlime,numsalt})/n;
  return 0;
}