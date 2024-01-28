/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/137/A
  A. Postcards and photos
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  
  Polycarpus has postcards and photos hung in a row on the wall. He decided to put them away to the closet and hang on the wall a famous painter's picture. 
  Polycarpus does it like that: he goes from the left to the right and removes the objects consecutively. As Polycarpus doesn't want any mix-ups to happen, 
  he will not carry in his hands objects of two different types. In other words, Polycarpus can't carry both postcards and photos simultaneously. 
  Sometimes he goes to the closet and puts the objects there, thus leaving his hands free. Polycarpus must put all the postcards and photos to the closet. 
  He cannot skip objects. What minimum number of times he should visit the closet if he cannot carry more than 5 items?

  Input
  The only line of the input data contains a non-empty string consisting of letters "С" and "P" whose length does not exceed 100 characters. 
  If the i-th character in the string is the letter "С", that means that the i-th object (the numbering goes from the left to the right) on Polycarpus' wall is a postcard. 
  And if the i-th character is the letter "P", than the i-th object on the wall is a photo.

  Output
  Print the only number — the minimum number of times Polycarpus has to visit the closet.
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
  int cnt = 1, sum = 0;
  string s;
  cin >> s;
  FOR(i, 1, s.size()) {
    if(s[i] != s[i - 1] || cnt == 5) {
      sum++;
      cnt = 1;
    } else cnt++;
  }
  cout << sum + 1;

  return 0;
}