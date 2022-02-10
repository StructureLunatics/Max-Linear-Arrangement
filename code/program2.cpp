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
    // Read from stdin num of graphs to read.
    int AllG; 
    cin >> AllG;

    for(int i = 0; i < AllG; i++){
        // Create graph object filled by ReadGraph function.
        graph g = ReadGraph();

        // Vector pi; size (vertices num); values (0 to n-1).
        vector <int> pi = Pi(g.vertices());
        
        // Append to AllD the max Distance of graph with positions pi.
        cout << ComputeD(g, pi) << endl;
    }

    return 0;
}
