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


void RecExplorerAux(const graph& g, vector<int>& pi, int& Dmax, int i){
    {
        if (i==0) {
            int D = ComputeD(g, pi);
            if (D > Dmax){Dmax = D;}
        } else {
            for (int j=0; j<i; j++) {
                swap(pi[j], pi[i-1]);
                RecExplorerAux(g, pi, Dmax, i-1);
                swap(pi[j], pi[i-1]);
            }
        }
    }
}

int RecExplorer(const graph& g, vector<int>& pi){
    int Dmax = 0;
    RecExplorerAux(g, pi, Dmax, g.vertices());
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
        cout << Dmax << endl;
    }
    return 0;
}
