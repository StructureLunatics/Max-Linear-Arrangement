#include <cmath>
#include <numeric>
#include <vector>
#include <algorithm>
#include <iostream>
#include "graph.hpp"
#include "graph_utilities.hpp"

using namespace std;

/*  PROGRAM 4
    ---------
    Input: various graphs
    Output: the value of Dmax for each of them. 

The results has to be calculated using a recursive algorithm for the exhaustive exploration. 
*/

// [Recursive exploration of vertex permutations]
// Inputs: graph, vector of positions, Dmax, index
// Outputs: none
void RecExplorerAux(const graph& g, vector<int>& pi, int& Dmax, int i){
    {
        // If index is 0
        if (i==0) {
            // Compute D of current permutation
            int D = ComputeD(g, pi);
            // If current D is grater than previous, update Dmax
            if (D > Dmax){Dmax = D;}
        } else {
            // For recursive call, iterate while j<i
            for (int j=0; j<i; j++) {
                // Swap element in pi index j <--> for element in index i-1
                swap(pi[j], pi[i-1]);
                // Call recursive function with index - 1
                RecExplorerAux(g, pi, Dmax, i-1);
                // Reverse swap
                swap(pi[j], pi[i-1]);
            }
        }
    }
}

// [Calling recursive exploration]
// Inputs: graph, vector of positions
// Outputs: Max distance between all permutations
int RecExplorer(const graph& g, vector<int>& pi){
    // Initialize Dmax to 0
    int Dmax = 0;
    // Call recursive exploration function
    RecExplorerAux(g, pi, Dmax, g.vertices());
    // Return Dmax
    return Dmax;
}


int main(){
    // Storing number of graphs we will have to read.
    int AllG;
    cin >> AllG;

    for(int i = 0; i < AllG; i++){
        // Create graph object filled by ReadGraph function.
        graph g = ReadGraph();
        // Vector pi; size (vertices num); values (0 to n-1).
        vector <int> pi = Pi(g.vertices());

        // Call recursive explorer functioons
        int Dmax = RecExplorer(g, pi);
        // Store Dmax into AllD vector
        cout << Dmax << endl;
    }
    return 0;
}
