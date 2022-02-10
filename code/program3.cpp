#include <vector>
#include <algorithm>
#include <iostream>
#include "graph.hpp"
#include "graph_utilities.hpp"

using namespace std;

/*  PROGRAM 3
    ---------
    Input: various graphs
    Output: the value of Dmax for each of them. 

The results has to be calculated using an exhaustive enumeration of the n! linear arrangements. 
*/

int main(){
    // Read from stdin num of graphs to read.
    int AllG; 
    cin >> AllG;

    // Declare vector used for storing Dmax for each graph
    vector<int> AllD;

    for(int i = 0; i < AllG; i++){
        // Create graph object filled by ReadGraph function.
        graph g = ReadGraph();
        // Vector pi; size (vertices num); values (0 to n-1).
        vector <int> pi = Pi(g.vertices());
        
        int Dmax = 0;
        // Permutate all possible positions
        do {
            // Call compute D taking two params (vertices) method
            int D = ComputeD(g, pi);
            // If new D is greater than current Dmax, update Dmax
            if (D > Dmax){Dmax = D;}
        } while ( next_permutation(pi.begin(), pi.end()) );

        // Save value from graph permutation of max distance
        AllD.push_back(Dmax);
    }

    // Printing Dmax of each graph to stdout
    display(AllD);
    
    return 0;
}
