#include <cmath>
#include <vector>
#include <iostream>
#include "graph.hpp"
#include "graph_utilities.hpp"

using namespace std;
vector <int> GraphPos(int v);

/*  PROGRAM 1
    ---------
    Input: single graph, position of the vertices.
    Output: D value
*/


int main(){
    // Call Read graph function
    graph g;
    g = ReadGraph();

    // Call GraphPos function
    vector<int> pi;
    pi = GraphPos(g.vertices());

    // Call Compute D function taking two a graph and vector pi as parameters
    int D;
    D = ComputeD(g, pi);

    // Print D to standard output
    cout << D << endl;
    
    return 0;
}


// [Read vector representing vertex positions]
// Inputs: vector
// Output: Pi vector
vector <int> GraphPos(int v){
    vector <int> pi;

    // iterate v(number of vertices) times
    for(int i = 0; i < v; i++){
        // Read vertex from stdin
        int vertex;
        cin >> vertex;
        pi.push_back(vertex);
    }
  
    // Return vector vith ordered vertices
    return pi;
}
