// https://codeforces.com/problemset/problem/1883/B
// B. Chemistry
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output

// You are given a string s of length n, consisting of lowercase Latin letters, and an integer k.

// You need to check if it is possible to remove exactly k characters from the string s in such a way that 
// the remaining characters can be rearranged to form a palindrome. Note that you can reorder the remaining characters in any way.

// A palindrome is a string that reads the same forwards and backwards. For example, the strings "z", "aaa", "aba", "abccba" are palindromes, 
// while the strings "codeforces", "reality", "ab" are not.

// Input
// Each test consists of multiple test cases. The first line contains a single integer t (1 ≤ t ≤ 10^4) — the number of the test cases. 
// This is followed by their description.

// The first line of each test case contains two integers n and k (0 ≤ k < n ≤ 10^5) — the length of the string s and the number of characters to be deleted.

// The second line of each test case contains a string s of length n, consisting of lowercase Latin letters.

// It is guaranteed that the sum of n over all test cases does not exceed 2⋅105.

// Output
// For each test case, output "YES" if it is possible to remove exactly k characters from the string s in such a way that 
// the remaining characters can be rearranged to form a palindrome, and "NO" otherwise.

// You can output the answer in any case (uppercase or lowercase). 
// For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive answers.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin>>t;
  while (t--) {
    int n, k, cntOdd = 0, sumOdd = 0;
    string s;
    cin>>n>>k>>s;
    int a[30];
    FOR(i,0,30){
      a[i] = 0;
    }
    FOR(i,0,n) {
      int b = s[i] - 97;
      a[b]++;
    }
    FOR(i,0,30) {
      if(a[i] % 2 != 0) {
        cntOdd++;
        sumOdd += a[i];
      }
    }
    if(cntOdd <= k) {
      cout<<"YES"<<endl;
    } else if(sumOdd - k == 1 || (cntOdd - k == 1)) {
      cout<<"YES"<<endl;
    } else {
      cout<<"NO"<<endl;
    }
  }

  return 0;
}