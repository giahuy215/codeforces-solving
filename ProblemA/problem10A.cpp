/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/10/problem/A
  A. Power Consumption Calculation
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Tom is interested in power consumption of his favourite laptop. His laptop has three modes. 
  In normal mode laptop consumes P1 watt per minute. T1 minutes after Tom moved the mouse or touched the keyboard for the last time, 
  a screensaver starts and power consumption changes to P2 watt per minute. Finally, after T2 minutes from the start of the screensaver, 
  laptop switches to the "sleep" mode and consumes P3 watt per minute. 
  If Tom moves the mouse or touches the keyboard when the laptop is in the second or in the third mode, it switches to the first (normal) mode. 
  Tom's work with the laptop can be divided into n time periods [l1, r1], [l2, r2], ..., [ln, rn]. 
  During each interval Tom continuously moves the mouse and presses buttons on the keyboard. Between the periods Tom stays away from the laptop.
  
  Input
  The first line contains 6 integer numbers n, P1, P2, P3, T1, T2 (1 ≤ n ≤ 100, 0 ≤ P1, P2, P3 ≤ 100, 1 ≤ T1, T2 ≤ 60). 
  The following n lines contain description of Tom's work. Each i-th of these lines contains two space-separated integers li and ri (0 ≤ li < ri ≤ 1440, ri < li + 1 for i < n), 
  which stand for the start and the end of the i-th period of work.

  Output
  Output the answer to the problem.
*/
#include<bits/stdc++.h>
using namespace std;
int n,a,b,d,e,f,l,r,c,s;
int main()
{
  cin >> n >> a >> b >> d >> e >> f;
  for(int i=1;i<=n;i++){
    cin >> l >> r;
    if(i > 1){
      s += min(e, l - c) * a;
      if(l - c > e){
        s += min(l - c - e, f) * b;
        if(l - c > e + f) s += (l - c - e - f) * d;
      }
    }
    s += (r - l) * a;
    c = r;
  }

  cout << s;
  return 0;
}