/*
  Author : Nguyen Duc Gia Huy
*/
/*
  B. Unary
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Unary is a minimalistic Brainfuck dialect in which programs are written using only one token.

  Brainfuck programs use 8 commands: "+", "-", "[", "]", "<", ">", "." and "," (their meaning is not important for the purposes of this problem). 
  Unary programs are created from Brainfuck programs using the following algorithm. 
  First, replace each command with a corresponding binary code, using the following conversion table:

  - ">"  →  1000,
  - "<"  →  1001,
  - "+"  →  1010,
  - "-"  →  1011,
  - "."  →  1100,
  - ","  →  1101,
  - "["  →  1110,
  - "]"  →  1111.
  Next, concatenate the resulting binary codes into one binary number in the same order as in the program. 
  Finally, write this number using unary numeral system — this is the Unary program equivalent to the original Brainfuck one.

  You are given a Brainfuck program. Your task is to calculate the size of the equivalent Unary program, and print it modulo 1000003 (1e6 + 3).

  Input
  The input will consist of a single line p which gives a Brainfuck program. String p will contain between 1 and 100 characters, inclusive. 
  Each character of p will be "+", "-", "[", "]", "<", ">", "." or ",".

  Output
  Output the size of the equivalent Unary program modulo 1000003 (1e6 + 3).
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)
#define all(x) (x).begin(), (x).end()
#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

const int modulo = 1e6 + 3;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  string s, v;
  cin >> s;
  FOR(i, 0, s.size()) {
    switch (s[i]) {
      case '>':
        v += "1000"; 
        break;
      case '<':
        v += "1001"; 
        break;
      case '+':
        v += "1010"; 
        break;
      case '-':
        v += "1011"; 
        break;
      case '.':
        v += "1100"; 
        break;
      case ',':
        v += "1101"; 
        break;
      case '[':
        v += "1110"; 
        break;
      case ']':
        v += "1111"; 
        break;
      
      default:
        break;
    }
  }
  ull sum = 0, cnt = 0;
  ROF(i, 0, v.size()) {
    if(v[i] == '1') {
      sum = sum % modulo + fmod(pow(2, cnt), modulo);
      cnt++;
    } else {
      cnt++;
    }
    if(sum > modulo) sum %= modulo;
  }
  cout << sum;

  return 0;
}