// https://codeforces.com/problemset/problem/32/B
// B. Borze
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Ternary numeric notation is quite popular in Berland. To telegraph the ternary number the Borze alphabet is used. 
// Digit 0 is transmitted as «.», 1 as «-.» and 2 as «--». 
// You are to decode the Borze code, i.e. to find out the ternary number given its representation in Borze alphabet.

// Input
// The first line contains a number in Borze code. The length of the string is between 1 and 200 characters. 
// It's guaranteed that the given string is a valid Borze code of some ternary number (this number can have leading zeroes).

// Output
// Output the decoded ternary number. It can have leading zeroes.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  string s;
  cin>>s;
  int a = 0;
  FOR(i,0,s.size()){
    if(s.at(i) == '.') {
      if(i == 0) {
        cout<<0;
        a = 0;
      } else if(s.at(i - 1) == '-' && a != 2) {
        cout<<1;
      } else {
        cout<<0;
      }
    } else {
      if(i == 0) {
        continue;
      } else if (s.at(i - 1) == '-' && a != 2){
        cout<<2;
        a = 2;
      } else {
        a = 0;
        continue;
      }
    }
  }

  return 0;
}