/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/133/problem/C
  C. Turing Tape
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  INTERCAL is the oldest of esoteric programming languages. One of its many weird features is the method of character-based output, 
  known as Turing Tape method. It converts an array of unsigned 8-bit integers into a sequence of characters to print, using the following method.

  The integers of the array are processed one by one, starting from the first. Processing i-th element of the array is done in three steps:

  1. The 8-bit binary notation of the ASCII-code of the previous printed character is reversed. When the first element of the array is processed, the result of this step is considered to be 0.

  2. The i-th element of the array is subtracted from the result of the previous step modulo 256.

  3. The binary notation of the result of the previous step is reversed again to produce ASCII-code of the i-th character to be printed.

  You are given the text printed using this method. Restore the array used to produce this text.

  Input
  The input will consist of a single line text which contains the message printed using the described method. 
  String text will contain between 1 and 100 characters, inclusive. ASCII-code of each character of text will be between 32 (space) and 126 (tilde), inclusive.

  Output
  Output the initial array, which was used to produce text, one integer per line.
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)
#define all(x) (x).begin(), (x).end()
#define endl "\n"

typedef long long ll;
using namespace std;

string changeToBinaryReverse(int n) {
  string ans;
  int temp = 8;
  while (temp > 0) {
    int last = n % 2;
    n /= 2;
    ans += to_string(last);
    temp--;
  }
  return ans;
}

int changeBinaryToDecima(string s) {
  int ans = 0;
  int temp = 0;
  ROF(i, 0, s.size()) {
    ans += (s[i] - '0') * pow(2, temp);
    temp++;
  }
  return ans;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  string s;
  int temp = 0;
  getline(cin, s);
  FOR(i, 0, s.size()) {
    int a = s[i];
    string v = changeToBinaryReverse(a);
    int b = changeBinaryToDecima(v);
    cout << (256 - b + temp) % 256 << endl;
    temp = b;
  }

  return 0;
}