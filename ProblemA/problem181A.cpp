// A. Series of Crimes
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// The Berland capital is shaken with three bold crimes committed by the Pihsters, a notorious criminal gang.

// The Berland capital's map is represented by an n × m rectangular table. 
// Each cell of the table on the map represents some districts of the capital.

// The capital's main detective Polycarpus took a map and marked there the districts where the first three robberies had been committed as asterisks. 
// Deduction tells Polycarpus that the fourth robbery will be committed in such district, 
// that all four robbed districts will form the vertices of some rectangle, parallel to the sides of the map.

// Polycarpus is good at deduction but he's hopeless at math. So he asked you to find the district where the fourth robbery will be committed.

// Input
// The first line contains two space-separated integers n and m (2 ≤ n, m ≤ 100) — the number of rows and columns in the table, correspondingly.

// Each of the next n lines contains m characters — the description of the capital's map. Each character can either be a "." (dot), or an "*" (asterisk). 
// A character equals "*" if the corresponding district has been robbed. Otherwise, it equals ".".

// It is guaranteed that the map has exactly three characters "*" and we can always find the fourth district that meets the problem requirements.

// Output
// Print two integers — the number of the row and the number of the column of the city district that is the fourth one to be robbed. 
// The rows are numbered starting from one from top to bottom and the columns are numbered starting from one from left to right.
#include<iostream>
using namespace std;

int main() {
  int n,m;
  int a[3];
  int b[3];
  int d = 0;

  cin>>n>>m;

  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= m; j++) {
      char c;
      cin>>c;
      if(c == '*') {
        a[d] = i;
        b[d] = j;
        d++;
      }
    }
  }
  if(a[0] == a[1]) {
    a[3] = a[2];
  } else if(a[1] == a[2]) {
    a[3] = a[0];
  } else {
    a[3] = a[1];
  }

  if(b[0] == b[1]) {
    b[3] = b[2];
  } else if(b[1] == b[2]) {
    b[3] = b[0];
  } else {
    b[3] = b[1];
  }
  cout<<a[3]<<" "<<b[3];
  return 0;
}