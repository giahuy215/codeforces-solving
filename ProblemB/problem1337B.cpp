/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1337/problem/B
  B. Kana and Dragon Quest game
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Kana was just an ordinary high school girl before a talent scout discovered her. Then, she became an idol. 
  But different from the stereotype, she is also a gameholic.

  One day Kana gets interested in a new adventure game called Dragon Quest. In this game, her quest is to beat a dragon.
  
  The dragon has a hit point of x initially. When its hit point goes to 0 or under 0, it will be defeated. In order to defeat the dragon, 
  Kana can cast the two following types of spells.

  - Void Absorption
  Assume that the dragon's current hit point is h, after casting this spell its hit point will become ⌊h/2⌋ + 10. Here ⌊h/2⌋ denotes h divided by two, rounded down.

  - Lightning Strike
  This spell will decrease the dragon's hit point by 10. Assume that the dragon's current hit point is h, after casting this spell its hit point will be lowered to h − 10.

  Due to some reasons Kana can only cast no more than n Void Absorptions and m Lightning Strikes. She can cast the spells in any order and doesn't have to cast all the spells. 
  Kana isn't good at math, so you are going to help her to find out whether it is possible to defeat the dragon.

  Input
  The first line contains a single integer t (1 ≤ t ≤ 1000)  — the number of test cases.

  The next t lines describe test cases. For each test case the only line contains three integers x, n, m (1 ≤ x ≤ 1e5, 0 ≤ n,m ≤ 30)  — the dragon's intitial hit point, 
  the maximum number of Void Absorptions and Lightning Strikes Kana can cast respectively.

  Output
  If it is possible to defeat the dragon, print "YES" (without quotes). Otherwise, print "NO" (without quotes).

  You can print each letter in any case (upper or lower).
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
  int t;
  cin >> t;
  while (t--)
  {
    int x, n, m;
    cin >> x >> n >> m;
    while (n > 0 || m > 0)
    {
      if(x <= 10 && m > 0) {
        x = 0;
        cout << "YES" << endl;
        break;
      }
      if(n > 0) {
        x = x / 2 + 10;
        n--;
      } else {
        x -= 10 * m;
        m = 0;
      }
      if(x <= 0) {
        cout << "YES" << endl;
        break;
      }
    }
    if(x > 0) cout << "NO" << endl;
    
  }
  

  return 0;
}