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


void RecExplorerAux(const graph& g, vector<int>& pi, vector<int>& Ds, int i){
    {
        if (i==0) {
            int D = ComputeD(g, pi);
            Ds.push_back(D);
        } else {
            for (int j=0; j<i; j++) {
                swap(pi[j], pi[i-1]);
                RecExplorerAux(g, pi, Ds, i-1);
                swap(pi[j], pi[i-1]);
            }
        }
    }
}

int RecExplorer(const graph& g, vector<int>& pi){
    vector<int> Ds = {};
    RecExplorerAux(g, pi, Ds, g.vertices());
    int Dmax = *max_element(Ds.begin(), Ds.end());
    return Dmax;
    }

int main(){
    // Storing number of graphs we will have to read.
    int AllG;
    cin >> AllG;

    // Initializing a vector to store the Ds
    vector<int> AllD;

    for(int i = 0; i < AllG; i++){
        // Create graph object filled by ReadGraph function.
        graph g = ReadGraph();
        // Vector pi; size (vertices num); values (0 to n-1).
        vector <int> pi = Pi(g.vertices());

        // Call recursive explorer functioons
        int Dmax = RecExplorer(g, pi);
        // Store Dmax into AllD vector
        AllD.push_back(Dmax);
    }

    // Printing D values to standard output.
    display(AllD);

    return 0;
}
