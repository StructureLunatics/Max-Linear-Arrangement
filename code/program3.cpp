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
    int totalG;
    cin >> totalG;

    // Initializing a vector to store the Ds
    vector<int> Dmax_v;

    int myints[] = {1,2,3};

    std::sort (myints,myints+3);

    std::cout << "The 3! possible permutations with 3 elements:\n";
    do {
    std::cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
    } while ( std::next_permutation(myints,myints+3) );

    std::cout << "After loop: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';


    for(int i = 0; i < totalG; i++){
        // Declare graph object
        graph g;
        // Call ReadGraph function
        g = ReadGraph();

        // Permutate all possible positions

        // Save value from permutation of highest Dmax

    }

    return 0;
}
