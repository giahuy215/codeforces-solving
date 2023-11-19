// https://codeforces.com/problemset/problem/110/A
// A. Nearly Lucky Number
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Petya loves lucky numbers. We all know that lucky numbers are the positive integers whose decimal representations contain only the lucky digits 4 and 7. 
// For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

// Unfortunately, not all numbers are lucky. Petya calls a number nearly lucky if the number of lucky digits in it is a lucky number. 
// He wonders whether number n is a nearly lucky number.

// Input
// The only line contains an integer n (1 ≤ n ≤ 1018).

// Please do not use the %lld specificator to read or write 64-bit numbers in С++. 
// It is preferred to use the cin, cout streams or the %I64d specificator.

// Output
// Print on the single line "YES" if n is a nearly lucky number. Otherwise, print "NO" (without the quotes).
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)

typedef long long ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll n, count = 0, i = 0;
  cin>>n;
  int a[1001];
  while(n >= 0) {
    if(n < 10) {
      a[i] = n;
      i++;
      break;
    }
    a[i] = n%10;
    n = n/10;
    i++;
  }

  while(i-- >0) {
    if(a[i] == 4 || a[i] == 7) {
      count++;
    }
  }
  if(count == i || count == 4 || count == 7) {
    cout<<"YES";
  } else {
    cout<<"NO";
  }

  return 0;
}