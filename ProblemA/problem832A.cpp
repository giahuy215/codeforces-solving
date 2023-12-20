// https://codeforces.com/problemset/problem/832/A
// A. Sasha and Sticks
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output

// It's one more school day now. Sasha doesn't like classes and is always bored at them. 
// So, each day he invents some game and plays in it alone or with friends.

// Today he invented one simple game to play with Lena, with whom he shares a desk. The rules are simple. 
// Sasha draws n sticks in a row. After that the players take turns crossing out exactly k sticks from left or right in each turn. 
// Sasha moves first, because he is the inventor of the game. If there are less than k sticks on the paper before some turn, the game ends. 
// Sasha wins if he makes strictly more moves than Lena. Sasha wants to know the result of the game before playing, you are to help him.

// Input
// The first line contains two integers n and k (1 ≤ n, k ≤ 1e18, k ≤ n) — the number of sticks drawn by Sasha and 
// the number k — the number of sticks to be crossed out on each turn.

// Output
// If Sasha wins, print "YES" (without quotes), otherwise print "NO" (without quotes).

// You can print each letter in arbitrary case (upper of lower).
#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll n, k;
  cin >> n >> k;
  if((n / k) % 2 == 0) {
    cout << "NO";
  } else {
    cout << "YES";
  }

  return 0;
}