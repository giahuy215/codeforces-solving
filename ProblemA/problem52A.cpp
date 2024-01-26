/*
    Author: Nguyen Duc Gia Huy
*/
/*
    https://codeforces.com/problemset/problem/52/A
    A. 123-sequence
    time limit per test: 2 seconds
    memory limit per test: 256 megabytes
    input: standard input
    output: standard output
    There is a given sequence of integers a1, a2, ..., an, where every number is from 1 to 3 inclusively. 
    You have to replace the minimum number of numbers in it so that all the numbers in the sequence are equal to each other.

    Input
    The first line contains an integer n (1 ≤ n ≤ 1e6). The second line contains a sequence of integers a1, a2, ..., an (1 ≤ ai ≤ 3).

    Output
    Print the minimum number of replacements needed to be performed to make all the numbers in the sequence equal.
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, a = 0, b = 0, c = 0;
    cin >> n;
    int arr[n];;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] == 1) a++;
        if(arr[i] == 2) b++;
        if(arr[i] == 3) c++;
    }
    cout << min({a + b, b + c, c + a});
    
    return 0;
}