// https://codeforces.com/problemset/problem/148/A
// A. Insomnia cure
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// «One dragon. Two dragon. Three dragon», — the princess was counting. She had trouble falling asleep, and she got bored of counting lambs when she was nine.

// However, just counting dragons was boring as well, so she entertained herself at best she could. 
// Tonight she imagined that all dragons were here to steal her, and she was fighting them off. 
// Every k-th dragon got punched in the face with a frying pan. Every l-th dragon got his tail shut into the balcony door.
// Every m-th dragon got his paws trampled with sharp heels. Finally, she threatened every n-th dragon to call her mom, and he withdrew in panic.

// How many imaginary dragons suffered moral or physical damage tonight, if the princess counted a total of d dragons?

// Input
// Input data contains integer numbers k, l, m, n and d, each number in a separate line (1 ≤ k, l, m, n ≤ 10, 1 ≤ d ≤ 105).

// Output
// Output the number of damaged dragons.
#include<iostream>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int k,l,m,n,d,count=0;
  cin>>k>>l>>m>>n>>d;

  FOR(i,1,d+1) {
    if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
      count++;
    }
  }
  cout<<count;
  return 0;
}