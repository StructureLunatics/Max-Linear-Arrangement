#include <cmath>
#include <numeric>
#include <vector>
#include <iostream>
#include <algorithm>
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
    // Storing number of graphs we will have to read.
    int AllG;
    cin >> AllG;

    // Initializing a vector to store the Ds
    vector<int> AllD;

    for(int i = 0; i < AllG; i++){
        // Declare graph object
        graph g;
        // Call ReadGraph function
        g = ReadGraph();

        // Declare pi vector and initialize from 0 to g.vertices-1
        vector <int> pi(g.vertices());
        iota(pi.begin(), pi.end(), 0);

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

    // Printing Dmax of each graph to standard output.
    for(auto i: AllD){
        cout << i << endl;
    }

    return 0;
}
