// https://codeforces.com/contest/731/problem/A
// A. Night at the Museum
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Grigoriy, like the hero of one famous comedy film, found a job as a night security guard at the museum. 
// At first night he received embosser and was to take stock of the whole exposition.

// Embosser is a special devise that allows to "print" the text of a plastic tape. Text is printed sequentially, character by character. 
// The device consists of a wheel with a lowercase English letters written in a circle, 
// static pointer to the current letter and a button that print the chosen letter. 
// At one move it's allowed to rotate the alphabetic wheel one step clockwise or counterclockwise. 
// Initially, static pointer points to letter 'a'. Other letters are located as shown on the picture:

// https://espresso.codeforces.com/c679a5275452f6413530af863569f292d6831e93.png (picture)

// After Grigoriy add new item to the base he has to print its name on the plastic tape and attach it to the corresponding exhibit. 
// It's not required to return the wheel to its initial position with pointer on the letter 'a'.

// Our hero is afraid that some exhibits may become alive and start to attack him, so he wants to print the names as fast as possible. 
// Help him, for the given string find the minimum number of rotations of the wheel required to print it.

// Input
// The only line of input contains the name of some exhibit — the non-empty string consisting of no more than 100 characters. 
// It's guaranteed that the string consists of only lowercase English letters.

// Output
// Print one integer — the minimum number of rotations of the wheel, required to print the name given in the input.

#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int k = 0, sum = 0;
  string s;
  cin>>s;
  FOR(i,0,s.size()) {
    int num = s[i] - 97;
    if(k < num) {
      if((26 - num + k) < abs(num - k)) {
        sum += (26 - num + k);
        k = num;
      } else {
        sum += abs(num - k);
        k = num;
      }
    } else {
      if((26 + num - k) < abs(num - k)) {
        sum += (26 + num - k);
        k = num;
      } else {
        sum += abs(num - k);
        k = num;
      }
    }
  }
  cout<<sum;

  return 0;
}