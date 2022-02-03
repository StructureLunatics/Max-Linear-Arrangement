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

int main(){
    // Storing number of graphs we will have to read.
    int totalG;
    cin >> totalG;

    // Initializing a vector to store the Ds
    vector<int> AllD;

    // Printing D values to standard output.
    for(auto i: AllD){
        cout << i << endl;
    }

    return 0;
}