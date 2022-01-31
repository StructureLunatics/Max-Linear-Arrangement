#include <cmath>
#include <numeric>
#include <vector>
#include <iostream>
#include "graph.hpp"
#include "graph_utilities.hpp"

using namespace std;


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
