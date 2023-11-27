// https://codeforces.com/problemset/problem/41/A
// A. Translation
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// The translation from the Berland language into the Birland language is not an easy task. 
// Those languages are very similar: a berlandish word differs from a birlandish word with the same meaning a little: 
// it is spelled (and pronounced) reversely. For example, a Berlandish word code corresponds to a Birlandish word edoc. 
// However, it's easy to make a mistake during the «translation». Vasya translated word s from Berlandish into Birlandish as t. 
// Help him: find out if he translated the word correctly.

// Input
// The first line contains word s, the second line contains word t. The words consist of lowercase Latin letters. 
// The input data do not consist unnecessary spaces. The words are not empty and their lengths do not exceed 100 symbols.

// Output
// If the word t is a word s, written reversely, print YES, otherwise print NO.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)

#define all(x) (x).begin(), (x).end()
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  string s, t;
  cin>>s>>t;
  reverse(all(t));
  FOR(i,0,s.size()){
    if(s[i] != t[i]) {
      cout<<"NO";
      return 0;
    }
  }
  cout<<"YES";

  return 0;
}