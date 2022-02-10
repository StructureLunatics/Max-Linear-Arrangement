#include <cmath>
#include <numeric>
#include <vector>
#include <iostream>
#include "graph.hpp"
#include "graph_utilities.hpp"

using namespace std;

/*  PROGRAM 5
    ---------
    Input: various graphs
    Output: the value of Dmax for each of them. 

The results are obtained applying a branch & bound technique over the implicit tree.
*/

// [Recursive exploration of vertex permutations]
// Inputs: graph, vector of positions, Dmax, index
// Outputs: none
void BBExplorerAux(const graph& g, vector<int>& pi, int& Dmax, const int Dlimit, int i){
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
                BBExplorerAux(g, pi, Dmax, Dlimit, i-1);
                // Reverse swap
                swap(pi[j], pi[i-1]);
            }
        }
    }
}

// [Calling recursive exploration]
// Inputs: graph, vector of positions
// Outputs: Max distance between all permutations
int BBExplorer(const graph& g, vector<int>& pi, const int Dlimit){
    // Initialize Dmax to 0
    int Dmax = ComputeD(g, pi);
    // Call recursive exploration function
    BBExplorerAux(g, pi, Dmax, Dlimit, g.vertices());
    // Return Dmax
    return Dmax;
}


int main(){
    int AllG;
    cin >> AllG;
    for (int i = 0; i < AllG; i++){
        graph g = ReadGraph();
        vector<int> pi = Pi(g.vertices());
        int Dmax = BBExplorer(g, pi, ComputeD(g, pi));
        cout << Dmax << endl;
    }
}
