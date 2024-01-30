/*
    Author: Nguyen Duc Gia Huy
*/
/*
    https://codeforces.com/contest/1326/problem/B
    B. Maximums
    time limit per test: 1 second
    memory limit per test: 256 megabytes
    input: standard input
    output: standard output
    
    Alicia has an array, a1,a2,…,an, of non-negative integers. For each 1 ≤ i ≤ n, she has found a non-negative integer xi = max(0,a1,…,a(i−1)). Note that for i = 1, xi = 0.

    For example, if Alicia had the array a = {0,1,2,0,3}, then x = {0,0,1,2,2}.

    Then, she calculated an array, b1,b2,…,bn: bi = ai − xi.

    For example, if Alicia had the array a = {0,1,2,0,3}, b = {0−0,1−0,2−1,0−2,3−2} = {0,1,1,−2,1}.

    Alicia gives you the values b1,b2,…,bn and asks you to restore the values a1,a2,…,an. Can you help her solve the problem?

    Input
    The first line contains one integer n (3 ≤ n ≤ 200000) – the number of elements in Alicia's array.

    The next line contains n integers, b1,b2,…,bn (−1e9 ≤ bi ≤ 1e9).

    It is guaranteed that for the given array b there is a solution a1,a2,…,an, for all elements of which the following is true: 0 ≤ ai ≤ 1e9.

    Output
    Print n integers, a1,a2,…,an (0 ≤ ai ≤ 1e9), such that if you calculate x according to the statement, b1 will be equal to a1−x1, b2 will be equal to a2−x2, ..., and bn will be equal to an−xn.

    It is guaranteed that there exists at least one solution for the given tests. It can be shown that the solution is unique.
*/
#include<iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, mx = 0;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    for(int i = 0; i < n; i++) {
        if(i == 0) a[i] = b[i];
        else {
            mx = max(a[i - 1], mx);
            a[i] = b[i] + mx;
        }
    }
    
    for(int i : a) {
        cout << i << " ";
    }
    
    return 0;
}