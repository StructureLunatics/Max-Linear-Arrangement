#include <cmath>
#include <numeric>
#include <vector>
#include <iostream>
#include "graph.hpp"
#include "graph_utilities.hpp"
#include <chrono>

using namespace std;
using namespace std::chrono;

/*  PROGRAM 2
    ---------
    Input:  various graphs
    Output: value of D for each of them (vertex labels are interpreted as vertex positions).
*/

int main()
{
    auto start = high_resolution_clock::now();
    
    // Storing number of graphs we will have to read.
    int AllG;
    cin >> AllG;

    // Initializing a vector to store the Ds
    vector<int> AllD;

    for(int i = 0; i < AllG; i++){
        // Create graph object that takes as value ReadGraph function output
        graph g = ReadGraph();

        // Declaring vector pi with size = number of vertices
        vector <int> pi(g.vertices());
        // Filling vector pi from 0 to N-1
        iota(pi.begin(), pi.end(), 0);

        // Call compute D taking two params (vertices) method
        int D = ComputeD(g, pi);
        // Insert the D value inside Dvalues vector
        AllD.push_back(D);
    }

    // Printing D values to standard output.
    for(auto i: AllD){
        cout << i << endl;
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<seconds>(stop - start);
    cout << "Time taken by function: "
            << duration.count() << " seconds" << endl;


    return 0;
}
