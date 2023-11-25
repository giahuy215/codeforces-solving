// https://codeforces.com/problemset/problem/49/A
// A. Sleuth
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Vasya plays the sleuth with his friends. The rules of the game are as follows: those who play for the first time, 
// that is Vasya is the sleuth, he should investigate a "crime" and find out what is happening. 
// He can ask any questions whatsoever that can be answered with "Yes" or "No". 
// All the rest agree beforehand to answer the questions like that: if the question’s last letter is a vowel, 
// they answer "Yes" and if the last letter is a consonant, they answer "No". 
// Of course, the sleuth knows nothing about it and his task is to understand that.

// Unfortunately, Vasya is not very smart. After 5 hours of endless stupid questions everybody except Vasya got bored. 
// That’s why Vasya’s friends ask you to write a program that would give answers instead of them.

// The English alphabet vowels are: A, E, I, O, U, Y

// The English alphabet consonants are: B, C, D, F, G, H, J, K, L, M, N, P, Q, R, S, T, V, W, X, Z

// Input
// The single line contains a question represented by a non-empty line consisting of large and small Latin letters, spaces and a question mark.
// The line length does not exceed 100. 
// It is guaranteed that the question mark occurs exactly once in the line — as the last symbol and that the line contains at least one letter.

// Output
// Print answer for the question in a single line: YES if the answer is "Yes", NO if the answer is "No".

// Remember that in the reply to the question the last letter, not the last character counts. I. e. the spaces and the question mark do not count as letters.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s, t;
  getline(cin,s);
  ROF(i,0,s.size()){
    if(s[i] != '?' && s[i] != ' ') {
      t = s[i];
      break;
    }
  }
  transform(t.begin(), t.end(), t.begin(), ::tolower);
  if(t == "a" || t == "e" || t == "i" || t == "o" || t == "u" || t == "y") {
    cout<<"YES";
  } else {
    cout<<"NO";
  }

  return 0;
}