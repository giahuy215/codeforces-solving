/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/78/A
  A. Haiku
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Haiku is a genre of Japanese traditional poetry.

  A haiku poem consists of 17 syllables split into three phrases, containing 5, 7 and 5 syllables correspondingly (the first phrase should contain exactly 5 syllables, 
  the second phrase should contain exactly 7 syllables, and the third phrase should contain exactly 5 syllables). 
  A haiku masterpiece contains a description of a moment in those three phrases. Every word is important in a small poem, which is why haiku are rich with symbols. 
  Each word has a special meaning, a special role. The main principle of haiku is to say much using a few words.

  To simplify the matter, in the given problem we will consider that the number of syllable in the phrase is equal to the number of vowel letters there. 
  Only the following letters are regarded as vowel letters: "a", "e", "i", "o" and "u".

  Three phases from a certain poem are given. Determine whether it is haiku or not.

  Input
  The input data consists of three lines. The length of each line is between 1 and 100, inclusive. 
  The i-th line contains the i-th phrase of the poem. Each phrase consists of one or more words, which are separated by one or more spaces. 
  A word is a non-empty sequence of lowercase Latin letters. Leading and/or trailing spaces in phrases are allowed. 
  Every phrase has at least one non-space character. See the example for clarification.

  Output
  Print "YES" (without the quotes) if the poem is a haiku. Otherwise, print "NO" (also without the quotes).
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
  int a[3] = {0};
  string s[3];
  FOR(i, 0, 3) {
    getline(cin, s[i]);
  }
  FOR(i, 0, 3) {
    for(char x : s[i]) {
      if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
        a[i]++;
      }
    }
  }
  if(a[0] != 5 || a[1] != 7 || a[2] != 5) {
    cout << "NO";
  } else {
    cout << "YES";
  }

  return 0;
}