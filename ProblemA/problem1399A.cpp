// https://codeforces.com/problemset/problem/1399/A
// A. Remove Smallest
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// 
// You are given the array a consisting of n positive (greater than zero) integers.
// In one move, you can choose two indices i and j (i≠j) such that the absolute difference between ai and aj is no more than one 
// |ai - aj| ≤1) and remove the smallest of these two elements. If two elements are equal, you can remove any of them (but exactly one).

// Your task is to find if it is possible to obtain the array consisting of only one element using several (possibly, zero) such moves or not.
// You have to answer t independent test cases.
// Input
// The first line of the input contains one integer t (1 ≤ t ≤ 1000) — the number of test cases. Then t test cases follow.
// The first line of the test case contains one integer n (1 ≤ n ≤ 50) — the length of a. 
// The second line of the test case contains n integers a1,a2,a3,...an (1 ≤ t ≤ 100) where ai is the i-th element of a.
 
#include <bits/stdc++.h>
#define ll long long
#define FOR(i, a, b) for (ll i = (a); i < (b); i++)
#define ROF(i, a, b) for (ll i = (b-1); i >= (a); i--)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;

  FOR(i,0,t) {
    ll n;
    cin>>n;
    ll a[n];
    FOR(j,0,n) {
      cin>>a[j];
    }
    sort(a, a+n);
    bool istrue = true;
    ROF(k,0,n){
      if(a[k] - a[k-1] > 1 && k !=0) {
        istrue = false;
        break;
      }
    }
    if(istrue) {
      cout<<"YES"<<endl;
    } else {
      cout<<"NO"<<endl;
    }
  }

  return 0;
}