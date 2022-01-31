#include <cmath>
#include <numeric>
#include <vector>
#include <iostream>
#include "graph.hpp"
#include "graph_utilities.hpp"

using namespace std;

/*  PROGRAM 2
    ---------
    Input:  various graphs
    Output: value of D for each of them (vertex labels are interpreted as vertex positions).
*/

int main()
{
// Storing number of graphs we will have to read.
int numG;
cin >> numG;

// Initializing a vector to store the Ds
vector<int> Dmax_v;

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
    Dmax_v.push_back(D);
}

// Printing D values to standard output.
for(auto i: Dmax_v){
    cout << i << endl;
}

return 0;
}
