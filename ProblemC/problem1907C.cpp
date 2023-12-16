// https://codeforces.com/problemset/problem/1907/C
// C. Removal of Unattractive Pairs
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Vlad found a string s consisting of n lowercase Latin letters, and he wants to make it as short as possible.

// To do this, he can remove any pair of adjacent characters from s any number of times, provided they are different. 
// For example, if s=racoon, then by removing one pair of characters he can obtain the strings coon, roon, raon, and raco, 
// but he cannot obtain racn (because the removed letters were the same) or rcon (because the removed letters were not adjacent).

// What is the minimum length Vlad can achieve by applying any number of deletions?

// Input
// The first line of the input contains a single integer t (1 ≤ t ≤ 1e4) — the number of test cases. Descriptions of the test cases follow.

// The first line of each test case contains a single integer n (1 ≤ n ≤ 2⋅1e5) — the length of the string s.

// The second line of each test case contains the string s consisting of n lowercase Latin letters.

// It is guaranteed that the sum of n over all test cases does not exceed 2⋅105.

// Output
// For each test case, output a single number—the minimum length of the string s, after removing pairs of adjacent characters with different values.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

#define all(x) (x).begin(), (x).end()

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n, cnt = 1, max = 0;
    string s;
    cin >> n >> s;
    sort(all(s));
    FOR(i, 1, n) {
      if(s[i] == s[i - 1]) {
        cnt++;
      } else {
        if(max < cnt) max = cnt;
        cnt = 1;
      }
    }
    if(max < cnt) max = cnt;
    if(max == 1) {
      if(n % 2 == 1) cout << 1 << "\n";
      else cout << 0 << "\n";
    } else if(max > n/2) {
      cout << abs(max - (n - max)) << "\n";
    } else {
      if(n % 2 == 1) cout << 1 << "\n";
      else cout << 0 << "\n";
    }
  }
  
  return 0;
}