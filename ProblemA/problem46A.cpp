/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/46/A
  A. Ball Game
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  
  A kindergarten teacher Natalia Pavlovna has invented a new ball game. This game not only develops the children's physique, but also teaches them how to count.

  The game goes as follows. Kids stand in circle. Let's agree to think of the children as numbered with numbers from 1 to n clockwise and the child number 1 is holding the ball. 
  First the first child throws the ball to the next one clockwise, i.e. to the child number 2. Then the child number 2 throws the ball to the next but one child, 
  i.e. to the child number 4, then the fourth child throws the ball to the child that stands two children away from him, i.e. to the child number 7, 
  then the ball is thrown to the child who stands 3 children away from the child number 7, then the ball is thrown to the child who stands 4 children away from the last one, and so on. 
  It should be mentioned that when a ball is thrown it may pass the beginning of the circle. For example, if n = 5, then after the third throw the child number 2 has the ball again. 
  Overall, n - 1 throws are made, and the game ends.

  The problem is that not all the children get the ball during the game. If a child doesn't get the ball, he gets very upset and cries until Natalia Pavlovna gives him a candy. 
  That's why Natalia Pavlovna asks you to help her to identify the numbers of the children who will get the ball after each throw.

  Input
  The first line contains integer n (2 ≤ n ≤ 100) which indicates the number of kids in the circle.

  Output
  In the single line print n - 1 numbers which are the numbers of children who will get the ball after each throw. 
  Separate the numbers by spaces.
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
  int n, a = 1;
  cin >> n;
  FOR(i, 1, n) {
    a += i;
    if(a <= n) cout << a << " ";
    else a % n == 0 ? cout << n << " " : cout << a % n << " ";
  }

  return 0;
}