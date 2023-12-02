// https://codeforces.com/problemset/problem/764/A
// A. Taymyr is calling you
// time limit per test: 1 second
// memory limit per test: 255 megabytes
// input: standard input
// output: standard output
// Comrade Dujikov is busy choosing artists for Timofey's birthday and is recieving calls from Taymyr from Ilia-alpinist.

// Ilia-alpinist calls every n minutes, i.e. in minutes n, 2n, 3n and so on. Artists come to the comrade every m minutes, 
// i.e. in minutes m, 2m, 3m and so on. The day is z minutes long, i.e. the day consists of minutes 1, 2, ..., z. 
// How many artists should be killed so that there are no artists in the room when Ilia calls? 
// Consider that a call and a talk with an artist take exactly one minute.

// Input
// The only string contains three integers — n, m and z (1 ≤ n, m, z ≤ 104).

// Output
// Print single integer — the minimum number of artists that should be killed so that there are no artists in the room when Ilia calls.
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n,m,z, count = 0;
  cin>>n>>m>>z;
  for(int i = n; i <= z; i+=n) {
    if(i % n == 0 && i % m == 0) {
      count++;
    }
  }
  cout<<count;
  return 0;
}