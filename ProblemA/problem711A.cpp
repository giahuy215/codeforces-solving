// https://codeforces.com/problemset/problem/711/A
// A. Bus to Udayland
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// ZS the Coder and Chris the Baboon are travelling to Udayland! To get there, they have to get on the special IOI bus. 
// The IOI bus has n rows of seats. There are 4 seats in each row, and the seats are separated into pairs by a walkway. 
// When ZS and Chris came, some places in the bus was already occupied.

// ZS and Chris are good friends. They insist to get a pair of neighbouring empty seats. 
// Two seats are considered neighbouring if they are in the same row and in the same pair. 
// Given the configuration of the bus, can you help ZS and Chris determine where they should sit?

// Input
// The first line of the input contains a single integer n (1 ≤ n ≤ 1000) — the number of rows of seats in the bus.

// Then, n lines follow. Each line contains exactly 5 characters, the first two of them denote the first pair of seats in the row, 
// the third character denotes the walkway (it always equals '|') and the last two of them denote the second pair of seats in the row.

// Each character, except the walkway, equals to 'O' or to 'X'. 'O' denotes an empty seat, 
// 'X' denotes an occupied seat. See the sample cases for more details.

// Output
// If it is possible for Chris and ZS to sit at neighbouring empty seats, print "YES" (without quotes) in the first line. 
// In the next n lines print the bus configuration, where the characters in the pair of seats for Chris and ZS is changed with characters '+'. 
// Thus the configuration should differ from the input one by exactly two charaters 
// (they should be equal to 'O' in the input and to '+' in the output).

// If there is no pair of seats for Chris and ZS, print "NO" (without quotes) in a single line.

// If there are multiple solutions, you may print any of them.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, count = 0;
  char s[1001][5];
  cin>>n;
  FOR(i,0,n) {
    FOR(j,0,5) {
      cin>>s[i][j];
    }
  }
  FOR(i,0,n) {
    if(s[i][0] == 'O' && s[i][1] == 'O' && count == 0) {
      s[i][0] = '+';
      s[i][1] = '+';
      count++;
    }
    if(s[i][3] == 'O' && s[i][4] == 'O' && count == 0) {
      s[i][3] = '+';
      s[i][4] = '+';
      count++;
    }
  }
  if(count == 0) {
    cout<<"NO";
  } else {
    cout<<"YES"<<endl;
    FOR(i,0,n) {
      FOR(j,0,5) {
        cout<<s[i][j];
      }
      cout<<endl;
    }
  }

  return 0;
}