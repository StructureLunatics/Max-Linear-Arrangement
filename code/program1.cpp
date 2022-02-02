#include <cmath>
#include <vector>
#include <iostream>
#include "graph.hpp"
#include "graph_utilities.hpp"

using namespace std;

/*  PROGRAM 1
    ---------
    Input: single graph, position of the vertices.
    Output: D value
*/

int main(){
    // Call Read graph function
    graph g = ReadGraph();

    // Call GraphPos function
    vector<int> pi = GraphPos(g.vertices());

    // Call Compute D function taking two a graph and vector pi as parameters
    int D = ComputeD(g, pi);

    // Print D to standard output
    cout << D << endl;
    
    return 0;
}
