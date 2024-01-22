/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/48/A
  A. Rock-paper-scissors
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Uncle Fyodor, Matroskin the Cat and Sharic the Dog live their simple but happy lives in Prostokvashino. 
  Sometimes they receive parcels from Uncle Fyodor’s parents and sometimes from anonymous benefactors, 
  in which case it is hard to determine to which one of them the package has been sent. 
  A photographic rifle is obviously for Sharic who loves hunting and fish is for Matroskin, but for whom was a new video game console meant? 
  Every one of the three friends claimed that the present is for him and nearly quarreled. 
  Uncle Fyodor had an idea how to solve the problem justly: they should suppose that the console was sent to all three of them and play it in turns. 
  Everybody got relieved but then yet another burning problem popped up — who will play first? 
  This time Matroskin came up with a brilliant solution, suggesting the most fair way to find it out: play rock-paper-scissors together. 
  The rules of the game are very simple. On the count of three every player shows a combination with his hand (or paw). 
  The combination corresponds to one of three things: a rock, scissors or paper. 
  Some of the gestures win over some other ones according to well-known rules: the rock breaks the scissors, the scissors cut the paper, and the paper gets wrapped over the stone. 
  Usually there are two players. Yet there are three friends, that’s why they decided to choose the winner like that: 
  If someone shows the gesture that wins over the other two players, then that player wins. Otherwise, another game round is required. 
  Write a program that will determine the winner by the gestures they have shown.

  Input
  The first input line contains the name of the gesture that Uncle Fyodor showed, the second line shows which gesture Matroskin showed and the third line shows Sharic’s gesture.

  Output
  Print "F" (without quotes) if Uncle Fyodor wins. Print "M" if Matroskin wins and "S" if Sharic wins. If it is impossible to find the winner, print "?".
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  string s[3];
  int a = 0, b = 0, c = 0;
  FOR(i, 0, 3) {
    cin >> s[i];
    if(s[i] == "rock") a++;
    if(s[i] == "paper") b++;
    if(s[i] == "scissors") c++;
  }
  if(a == 2 && b == 1) {
    FOR(i, 0, 3) {
      if(s[i] == "paper") {
        switch (i)
        {
        case 0:
          cout << "F";
          break;
        
        case 1:
          cout << "M";
          break;
        
        case 2:
          cout << "S";
          break;
        default:
          break;
        }
      }
    }
  } else if(b == 2 && c == 1) {
    FOR(i, 0, 3) {
      if(s[i] == "scissors") {
        switch (i)
        {
        case 0:
          cout << "F";
          break;
        
        case 1:
          cout << "M";
          break;
        
        case 2:
          cout << "S";
          break;
        default:
          break;
        }
      }
    }
  } else if(c == 2 && a == 1) {
    FOR(i, 0, 3) {
      if(s[i] == "rock") {
        switch (i)
        {
        case 0:
          cout << "F";
          break;
        
        case 1:
          cout << "M";
          break;
        
        case 2:
          cout << "S";
          break;
        default:
          break;
        }
      }
    }
  } else {
    cout << "?";
  }

  return 0;
}