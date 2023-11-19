// https://codeforces.com/contest/146/problem/A
// A. Lucky Ticket
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Petya loves lucky numbers very much. Everybody knows that lucky numbers are positive integers whose decimal record contains only the lucky digits 4 and 7. 
// For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

// Petya loves tickets very much. As we know, each ticket has a number that is a positive integer. Its length equals n (n is always even). 
// Petya calls a ticket lucky if the ticket's number is a lucky number and the sum of digits in the first half 
// (the sum of the first n / 2 digits) equals the sum of digits in the second half (the sum of the last n / 2 digits). 
// Check if the given ticket is lucky.

// Input
// The first line contains an even integer n (2 ≤ n ≤ 50) — the length of the ticket number that needs to be checked. The second line contains an integer whose length equals exactly n — the ticket number. The number may contain leading zeros.

// Output
// On the first line print "YES" if the given ticket number is lucky. Otherwise, print "NO" (without the quotes).
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)

using namespace std;

int n,m;
string s;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin>>n>>s;

  FOR(i,0,n) {
    if(s[i] != '4' && s[i] != '7') {
      cout<<"NO";
      return 0;
    } else if(i < n/2){
      m+= s[i];
    } else {
      m-= s[i];
    }
  }

  if(m == 0) {
    cout<<"YES";
  } else {
    cout<<"NO";
  }

  return 0;
}