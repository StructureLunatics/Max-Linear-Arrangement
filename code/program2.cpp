#include <cmath>
#include <numeric>
#include <vector>
#include <iostream>
#include "graph.hpp"
#include "graph_utilities.hpp"

using namespace std;

/*
Input: 
2      # number of graphs to follow

3 2    # n vertices, m edges
0 1    # vertices forming an edge
1 2    # vertices forming an edge

3 2
0 2
1 2

Output: 
2         # D of first graph 
3         # D of second graph
*/

int main()
{
  // Storing number of graphs we will have to read.
  int numG;
  cin >> numG;

  // Initializing a vector to store the Ds
  vector<int> Dvalues;

  for(int i = 0; i < numG; i++){
    // Call read graph input method
    graph g;
    g = ReadGraph();

    // Call pi creation to create the vector storing the vertices order
    vector <int> pi(g.vertices());
    // fills the pi vector from 0 to N-1
    iota(pi.begin(), pi.end(), 0);
    
    // Call compute D taking two params (vertices) method
    int D;
    D = ComputeD(g, pi);

    // Insert the D value inside the 
    Dvalues.push_back(D);
  }
  
  // Printing output D values
  for(auto i: Dvalues){cout << i << endl;}
  return 0;
}
