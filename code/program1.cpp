#include <cmath>
#include <vector>
#include <iostream>
#include "graph.hpp"
#include "graph_utilities.hpp"

using namespace std;

// Output: D value
int main()
{
  // Call read graph input method
  graph g;
  g = ReadGraph();

  // Call read vector with lin arrangment (pi) method
  vector <int> pi;
  pi = GraphPos(g.vertices());
  
  // Call compute D taking two params (vertices) method
  int D;
  D = ComputeD(g, pi);

  // Print D to standard output
  cout << D << endl;
  return 0;
}
