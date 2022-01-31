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
    // Declare graph object
    graph g;
    // Call ReadGraph function
    g = ReadGraph();

    // Declaring vector pi with size = number of vertices
    vector <int> pi(g.vertices());
    // Filling vector pi from 0 to N-1
    iota(pi.begin(), pi.end(), 0);

    // Call compute D taking two params (vertices) method
    int D;
    D = ComputeD(g, pi);

    // Insert the D value inside Dvalues vector
    Dvalues.push_back(D);
}

// Printing D values to standard output
for(auto i: Dvalues){
    cout << i << endl;
}

return 0;
}
