/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 21-07-2024
*/
/*
  https://codeforces.com/contest/1987/problem/F1
  F1. Interesting Problem (Easy Version)
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  This is the easy version of the problem. The only difference between the two versions is the constraint on n. 
  You can make hacks only if both versions of the problem are solved.

  You are given an array of integers a of length n.

  In one operation, you will perform the following two-step process:

  - Choose an index i such that 1 ≤ i < |a| and ai=i.
  - Remove ai and ai+1 from the array and concatenate the remaining parts.
  Find the maximum number of times that you can perform the operation above.

  Input
  Each test contains multiple test cases. The first line of input contains a single integer t (1 ≤ t ≤ 100) — the number of test cases. 
  The description of the test cases follows.

  The first line of each test case contains a single integer n (1 ≤ n ≤ 100) — the length of the array a.

  The second line of each test case contains n integers a1,a2,…,an (1 ≤ ai ≤ n) — the elements of the array a.

  It is guaranteed that the sum of n over all test cases does not exceed 100.

  Output
  For each test case, output a single integer — the maximum number of times that you can perform the operation.
*/
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll f(ll l, ll r, ll k, vector<ll> &arr, ll n, vector<vector<vector<ll>>> &dp){
	if(r <= 1 )return 0;
	if(l >= n)return 0;
	if(r-l < 1)return 0;
 
	if(dp[l][r][k] != -1)return dp[l][r][k];
 
	ll ans = f(l+1, r, k, arr, n, dp);
 
	if(l>=arr[l] && (l-arr[l])%2==0 && (l-arr[l])/2 <= k){
		for(ll i=l+1; i<=r; i++){
			ll izq = f(l + 1, i - 1, (l-arr[l])/2, arr, n, dp);
		    if (izq * 2 == (i - l - 1)) {
		        ll der = f(i + 1, r, k + izq + 1, arr, n, dp);
		        ans = max(ans, izq + der + 1);
		    }
		}
	}
 
	return dp[l][r][k] = ans;
}
 
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> arr(n+1);
 
		for(ll i=1; i<=n; i++)cin>>arr[i];
 
		vector<vector<vector<ll>>> dp(n+1, vector<vector<ll>>(n+1, vector<ll>(n+1, -1)));
 
		cout<<f(1, n, 0, arr, n, dp)<<endl;
	}
	return 0;
}