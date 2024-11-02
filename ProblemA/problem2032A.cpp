/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 02-11-2024
*/
/*
  https://codeforces.com/contest/2032/problem/A
  A. Circuit
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  Alice has just crafted a circuit with n lights and 2n switches. Each component (a light or a switch) has two states: on or off. 
  The lights and switches are arranged in a way that:

  - Each light is connected to exactly two switches.
  - Each switch is connected to exactly one light. It's unknown which light each switch is connected to.
  - When all switches are off, all lights are also off.
  - If a switch is toggled (from on to off, or vice versa), the state of the light connected to it will also toggle.
  Alice brings the circuit, which shows only the states of the 2n switches, to her sister Iris and gives her a riddle: what is the minimum and maximum number of lights that can be turned on?

  Knowing her little sister's antics too well, Iris takes no more than a second to give Alice a correct answer. Can you do the same?

  Input
  Each test consists of multiple test cases. The first line contains a single integer t (1 ≤ t ≤ 500) — the number of test cases. The description of the test cases follows.

  The first line of each test case contains a single integer n (1 ≤ n ≤ 50) — the number of lights in the circuit.

  The second line of each test case contains 2n integers a1,a2,…,a2n (0 ≤ ai ≤ 1) — the states of the switches in the circuit. ai=0 means the i-th switch is off, and ai=1 means the i-th switch is on.

  Output
  For each test case, output two integers — the minimum and maximum number of lights, respectively, that can be turned on.
*/
#include <bits/stdc++.h>
#define endl "\n"

typedef long long ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while(t--) {
    int n, cnt0 = 0, cnt1 = 0;
    cin >> n;
    for(int i = 0; i < 2 * n; i++) {
      int x;
      cin >> x;
      if(x == 0) cnt0++;
      else cnt1++;
    }
    if(cnt0 > cnt1) {
      if(cnt1 % 2 == 0) cout << 0;
      else cout << 1;
      cout << " " << cnt1 << endl;
    } else if(cnt1 > cnt0) {
      if(cnt1 % 2 == 0) cout << 0;
      else cout << 1;
      cout << " " << cnt0 << endl;
    } else {
      if(n % 2 == 0) cout << 0 << " ";
      else cout << 1 << " ";
      cout << n << endl;
    }
  }
  
  return 0;
}