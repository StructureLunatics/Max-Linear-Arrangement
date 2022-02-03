#include <cmath>
#include <numeric>
#include <vector>
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


int RecExplorer(graph g, vector<int>){
    // Base Case

    // Else
}

void RecExplorerAux(graph g, vector<int>, int i){
    
}


int main(){
    // Storing number of graphs we will have to read.
    int AllG;
    cin >> AllG;

    // Initializing a vector to store the Ds
    vector<int> AllD;

    for(int i = 0; i < AllG; i++){
        // Call ReadGraph function
        graph g = ReadGraph();

        // Declare pi vector and initialize from 0 to g.vertices-1
        vector <int> pi(g.vertices());
        iota(pi.begin(), pi.end(), 0);


        // Call recursive explorer functioons
        int Dmax = RecExplorer(g, pi);

        // Store Dmax into AllD vector
        AllD.push_back(Dmax);
    }


    // Printing D values to standard output.
    for(auto i: AllD){
        cout << i << endl;
    }

    return 0;
}