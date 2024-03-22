/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/363/A
  A. Soroban
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  
  You know that Japan is the country with almost the largest 'electronic devices per person' ratio. 
  So you might be quite surprised to find out that the primary school in Japan teaches to count using a Soroban — an abacus developed in Japan. 
  This phenomenon has its reasons, of course, but we are not going to speak about them. Let's have a look at the Soroban's construction.
  Soroban consists of some number of rods, each rod contains five beads. We will assume that the rods are horizontal lines. 
  One bead on each rod (the leftmost one) is divided from the others by a bar (the reckoning bar). This single bead is called go-dama and four others are ichi-damas. 
  Each rod is responsible for representing a single digit from 0 to 9. We can obtain the value of a digit by following simple algorithm:

  - Set the value of a digit equal to 0.
  - If the go-dama is shifted to the right, add 5.
  - Add the number of ichi-damas shifted to the left.

  Thus, the upper rod on the picture shows digit 0, the middle one shows digit 2 and the lower one shows 7. 
  We will consider the top rod to represent the last decimal digit of a number, so the picture shows number 720.

  Write the program that prints the way Soroban shows the given number n.

  Input
  The first line contains a single integer n (0 ≤ n < 10^9).

  Output
  Print the description of the decimal digits of number n from the last one to the first one (as mentioned on the picture in the statement), one per line. Print the beads as large English letters 'O', rod pieces as character '-' and the reckoning bar as '|'. Print as many rods, as many digits are in the decimal representation of number n without leading zeroes. We can assume that number 0 has no leading zeroes.
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)
#define all(x) (x).begin(), (x).end()
#define endl "\n"

typedef long long ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  string a[10] = {"O-|-OOOO", "O-|O-OOO", "O-|OO-OO", "O-|OOO-O", "O-|OOOO-", "-O|-OOOO", "-O|O-OOO", "-O|OO-OO", "-O|OOO-O", "-O|OOOO-"};
  string s;
  cin >> s;
  ROF(i, 0, s.size()) {
    cout << a[s[i] - '0'] << endl;
  }
  return 0;
}