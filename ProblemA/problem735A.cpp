// https://codeforces.com/problemset/problem/735/A
// A. Ostap and Grasshopper
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// On the way to Rio de Janeiro Ostap kills time playing with a grasshopper he took with him in a special box. 
// Ostap builds a line of length n such that some cells of this line are empty and some contain obstacles. 
// Then, he places his grasshopper to one of the empty cells and a small insect in another empty cell. 
// The grasshopper wants to eat the insect.

// Ostap knows that grasshopper is able to jump to any empty cell that is exactly k cells away from the current (to the left or to the right). 
// Note that it doesn't matter whether intermediate cells are empty or not as the grasshopper makes a jump over them. 
// For example, if k = 1 the grasshopper can jump to a neighboring cell only, and if k = 2 the grasshopper can jump over a single cell.

// Your goal is to determine whether there is a sequence of jumps such that grasshopper will get from his initial position to the cell with an insect.

// Input
// The first line of the input contains two integers n and k (2 ≤ n ≤ 100, 1 ≤ k ≤ n - 1) — the number of cells in the line and the length of one grasshopper's jump.

// The second line contains a string of length n consisting of characters '.', '#', 'G' and 'T'. 
// Character '.' means that the corresponding cell is empty, character '#' means that the corresponding cell contains an obstacle 
// and grasshopper can't jump there. Character 'G' means that the grasshopper starts at this position and, 
// finally, 'T' means that the target insect is located at this cell. 
// It's guaranteed that characters 'G' and 'T' appear in this line exactly once.

// Output
// If there exists a sequence of jumps (each jump of length k), such that the grasshopper can get from his initial position 
// to the cell with the insect, print "YES" (without quotes) in the only line of the input. Otherwise, print "NO" (without quotes).
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, k, a, b;
  cin>>n>>k;
  string s;
  cin>>s;
  FOR(i,0,n) {
    if(s[i] == 'G') {
      a = i;
    }
    if(s[i] == 'T') {
      b = i;
    }
  }
  if(abs(a - b) % k != 0) {
    cout<<"NO";
    return 0;
  } else if(a > b){
    for(int i = b; i <= a; i+=k) {
      if(s[i] == '#') {
        cout<<"NO";
        return 0;
      }
    }
    cout<<"YES";
  } else {
    for(int i = a; i <= b; i+=k) {
      if(s[i] == '#') {
        cout<<"NO";
        return 0;
      }
    }
    cout<<"YES";
  }

  return 0;
}