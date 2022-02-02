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

int main(){
    // Storing number of graphs we will have to read.
    int totalG;
    cin >> totalG;

    // Initializing a vector to store the Ds
    vector<graph> graphs;

    for(int i = 0; i < totalG; i++){
        // Declare graph object
        graph g;
        // Call ReadGraph function
        g = ReadGraph();
    }

    // Printing D values to standard output.
    for(auto g: graphs){
        // Declaring vector pi with size = number of vertices
        vector <int> pi(g.vertices());
        // Filling vector pi from 0 to N-1
        iota(pi.begin(), pi.end(), 0);
        
        // Call compute D taking two params (vertices) method
         // & print Dmax to stout
        cout << ComputeD(g, pi) << endl;
    }

    return 0;
}
