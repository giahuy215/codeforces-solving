// https://codeforces.com/contest/1895/problem/A
// A. Treasure Chest
// time limit per test: 2 seconds
// memory limit per test: 512 megabytes
// input: standard input
// output: standard output
// Monocarp has found a treasure map. The map represents the treasure location as an OX axis. Monocarp is at 0, the treasure chest is at x, 
// the key to the chest is at y.

// Obviously, Monocarp wants to open the chest. He can perform the following actions:

// go 1 to the left or 1 to the right (spending 1 second); pick the key or the chest up if he is in the same point as that object (spending 0 seconds);
// put the chest down in his current point (spending 0 seconds); open the chest if he's in the same point as the chest and has picked the key up (spending 0 seconds).
// Monocarp can carry the chest, but the chest is pretty heavy. He knows that he can carry it for at most k
// seconds in total (putting it down and picking it back up doesn't reset his stamina).

// What's the smallest time required for Monocarp to open the chest?

// Input
// The first line contains a single integer t (1≤t≤100) — the number of testcases.

// The only line of each testcase contains three integers x,y and k (1≤x,y≤100; x≠y; 0≤k≤100) — the initial point of the chest, 
// the point where the key is located, and the maximum time Monocarp can carry the chest for.

// Output
// For each testcase, print a single integer — the smallest time required for Monocarp to open the chest.
#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, k;
        cin >> x >> y >> k;
        if (x >= y) {
            cout << x;
        } else if(y - x <= k) {
            cout << y;
        } else {
            cout << y + y - x - k;
        }
        cout << endl;
    }
    return 0;
}
