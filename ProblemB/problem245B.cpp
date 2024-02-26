/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/245/problem/B
  B. Internet Address
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Vasya is an active Internet user. One day he came across an Internet resource he liked, so he wrote its address in the notebook. 
  We know that the address of the written resource has format:

  <protocol>://<domain>.ru[/<context>]

  where:
  - <protocol> can equal either "http" (without the quotes) or "ftp" (without the quotes),
  - <domain> is a non-empty string, consisting of lowercase English letters,
  - the /<context> part may not be present. If it is present, then <context> is a non-empty string, consisting of lowercase English letters.
  If string <context> isn't present in the address, then the additional character "/" isn't written. 
  Thus, the address has either two characters "/" (the ones that go before the domain), or three (an extra one in front of the context).

  When the boy came home, he found out that the address he wrote in his notebook had no punctuation marks. 
  Vasya must have been in a lot of hurry and didn't write characters ":", "/", ".".

  Help Vasya to restore the possible address of the recorded Internet resource.

  Input
  The first line contains a non-empty string that Vasya wrote out in his notebook. This line consists of lowercase English letters only.

  It is guaranteed that the given string contains at most 50 letters. It is guaranteed that the given string can be obtained from some correct Internet resource address, described above.

  Output
  Print a single line — the address of the Internet resource that Vasya liked. If there are several addresses that meet the problem limitations, you are allowed to print any of them.
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
  int cnt = 0;
  string s, v;
  cin >> s;
  ROF(i, 0, s.size()) {
    if(s[i] == 'u' && s[i - 1] == 'r' && cnt == 0) {
      if(i != s.size() - 1) v += "/";
      v += "ur.";
      cnt++;
      i--;
    } else if(i == 3 && s[i - 1] == 'p') {
      v += s[i];
      v += "//:";
    } else if(i == 3 && s[i - 1] == 't') {
      v += "//:";
      v += s[i];
    } else v += s[i];
  }
  reverse(v.begin(), v.end());
  cout << v;

  return 0;
}