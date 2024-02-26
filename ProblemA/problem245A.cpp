/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/245/A
  A. System Administrator
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Polycarpus is a system administrator. There are two servers under his strict guidance — a and b. 
  To stay informed about the servers' performance, Polycarpus executes commands "ping a" and "ping b". 
  Each ping command sends exactly ten packets to the server specified in the argument of the command. 
  Executing a program results in two integers x and y (x + y = 10; x, y ≥ 0). 
  These numbers mean that x packets successfully reached the corresponding server through the network and y packets were lost.

  Today Polycarpus has performed overall n ping commands during his workday. Now for each server Polycarpus wants to know whether the server is "alive" or not. 
  Polycarpus thinks that the server is "alive", if at least half of the packets that we send to this server reached it successfully along the network.

  Help Polycarpus, determine for each server, whether it is "alive" or not by the given commands and their results.

  Input
  The first line contains a single integer n (2 ≤ n ≤ 1000) — the number of commands Polycarpus has fulfilled. 
  Each of the following n lines contains three integers — the description of the commands. 
  The i-th of these lines contains three space-separated integers ti, xi, yi (1 ≤ ti ≤ 2; xi, yi ≥ 0; xi + yi = 10). 
  If ti = 1, then the i-th command is "ping a", otherwise the i-th command is "ping b". 
  Numbers xi, yi represent the result of executing this command, that is, xi packets reached the corresponding server successfully and yi packets were lost.

  It is guaranteed that the input has at least one "ping a" command and at least one "ping b" command.

  Output
  In the first line print string "LIVE" (without the quotes) if server a is "alive", otherwise print "DEAD" (without the quotes).

  In the second line print the state of server b in the similar format.
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
  int n, cnta = 0, cntb = 0;
  cin >> n;
  while (n--)
  {
    int t, x, y;
    cin >> t >> x >> y;
    if(t == 1) cnta += x - y;
    else cntb += x - y; 
  }
  if(cnta >= 0) cout << "LIVE" << endl;
  else cout << "DEAD" << endl;

  if(cntb >= 0) cout << "LIVE" << endl;
  else cout << "DEAD" << endl;

  return 0;
}