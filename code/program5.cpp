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


void BBExplorerAux(const graph& g, vector<int>& pi, int Dmax, int i);


int BBExplorer(const graph& g, vector<int>& pi);


int main(){
    int AllG;
    cin >> AllG;
    for (int i = 0; i < AllG; i++){
        graph g = ReadGraph();
        vector<int> pi = Pi(g.vertices());
        int Dmax = BBExplorer(g, pi);
        cout << Dmax << endl;
    }
}
