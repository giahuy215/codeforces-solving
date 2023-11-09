// https://codeforces.com/problemset/problem/202/A 
// A. LLPS
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// This problem's actual name, "Lexicographically Largest Palindromic Subsequence" is too long to fit into the page headline.

// You are given string s consisting of lowercase English letters only. Find its lexicographically largest palindromic subsequence.

// We'll call a non-empty string s[p1p2... pk] = sp1sp2... spk (1  ≤  p1 < p2 < ... < pk  ≤  |s|) a subsequence of string s = s1s2... s|s|, 
// where |s| is the length of string s. For example, strings "abcb", "b" and "abacaba" are subsequences of string "abacaba".

// String x = x1x2... x|x| is lexicographically larger than string y = y1y2... y|y| if either |x| > |y| and x1 = y1, x2 = y2, ..., x|y| = y|y|, 
// or there exists such number r (r < |x|, r < |y|) that x1 = y1, x2 = y2, ..., xr = yr and xr  +  1 > yr  +  1. Characters in the strings are compared according to their ASCII codes. For example, string "ranger" is lexicographically larger than string "racecar" and string "poster" is lexicographically larger than string "post".

// String s = s1s2... s|s| is a palindrome if it matches string rev(s) = s|s|s|s| - 1... s1. 
// In other words, a string is a palindrome if it reads the same way from left to right and from right to left. 
// For example, palindromic strings are "racecar", "refer" and "z".

// Input
// The only input line contains a non-empty string s consisting of lowercase English letters only. Its length does not exceed 10.

// Output
// Print the lexicographically largest palindromic subsequence of string s.
#include<iostream>
#include<string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin>>s;
  sort(s.begin(), s.end());

   
  int max = s[s.length() - 1];
  for (int i = 0; i < s.length(); i++){
    if (s[i] == max){
      cout<<s[i];
    }
  }
  return 0;
}