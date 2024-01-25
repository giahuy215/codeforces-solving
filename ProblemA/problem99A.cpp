/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/99/A
  A. Help Far Away Kingdom
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  In a far away kingdom lived the King, the Prince, the Shoemaker, the Dressmaker and many other citizens. They lived happily until great trouble came into the Kingdom. 
  The ACMers settled there.

  Most damage those strange creatures inflicted upon the kingdom was that they loved high precision numbers. 
  As a result, the Kingdom healers had already had three appointments with the merchants who were asked to sell, say, exactly 0.273549107 beer barrels. 
  To deal with the problem somehow, the King issued an order obliging rounding up all numbers to the closest integer to simplify calculations. 
  Specifically, the order went like this:

  If a number's integer part does not end with digit 9 and its fractional part is strictly less than 0.5, then the rounded up number coincides with the number’s integer part.
  If a number's integer part does not end with digit 9 and its fractional part is not less than 0.5, the rounded up number is obtained if we add 1 to the last digit of the number’s integer part.
  If the number’s integer part ends with digit 9, to round up the numbers one should go to Vasilisa the Wise. In the whole Kingdom she is the only one who can perform the tricky operation of carrying into the next position.
  Merchants found the algorithm very sophisticated and they asked you (the ACMers) to help them. Can you write a program that would perform the rounding according to the King’s order?

  Input
  The first line contains a single number to round up — the integer part (a non-empty set of decimal digits that do not start with 0 — with the exception of a case when the set consists of a single digit — in this case 0 can go first), 
  then follows character «.» (a dot), and then follows the fractional part (any non-empty set of decimal digits). The number's length does not exceed 1000 characters, including the dot. There are no other characters in the input data.

  Output
  If the last number of the integer part is not equal to 9, print the rounded-up number without leading zeroes. Otherwise, print the message "GOTO Vasilisa." (without the quotes).
*/
#include <iostream>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  string s, v;
  cin >> s;
  FOR(i, 0, s.size()) {
    if(s[i + 1] == '.') {
      if(s[i] != '9') {
        if(s[i + 2] >= '5') {
          v += char(s[i] + 1);
        } else v += s[i];
      } else {
        cout << "GOTO Vasilisa.";
        return 0;
      }
      break;
    } else {
      v += s[i];
    }
  }
  cout << v;

  return 0;
}