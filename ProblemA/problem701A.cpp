// https://codeforces.com/contest/701/problem/A
// A. Cards
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// There are n cards (n is even) in the deck. Each card has a positive integer written on it. n / 2 people will play new card game. 
// At the beginning of the game each player gets two cards, each card is given to exactly one player.

// Find the way to distribute cards such that the sum of values written of the cards will be equal for each player. 
// It is guaranteed that it is always possible.

// Input
// The first line of the input contains integer n (2 ≤ n ≤ 100) — the number of cards in the deck. It is guaranteed that n is even.

// The second line contains the sequence of n positive integers a1, a2, ..., an (1 ≤ ai ≤ 100), where ai is equal to the number written on the i-th card.

// Output
// Print n / 2 pairs of integers, the i-th pair denote the cards that should be given to the i-th player. 
// Each card should be given to exactly one player. Cards are numbered in the order they appear in the input.

// It is guaranteed that solution exists. If there are several correct answers, you are allowed to print any of them.
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    pair<int,int> p[n];
    for(int i = 0; i < n; i++) {
        cin>>p[i].first;
        p[i].second = i + 1;
    }
    sort(p, p + n);
    for(int i = 0; i < n/2; i++) {
        cout<<p[i].second<<" "<<p[n-i-1].second<<"\n";
    }
    
    return 0;
}