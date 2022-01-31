#include <iostream>
#include <algorithm>
#include "graph.hpp"
#include "graph_utilities.hpp"

using namespace std;

// [Read graph input method]
// Inputs: n vertices, m edges; vector of edges; position of each vertex
// Output: graph g
graph ReadGraph(){
    graph g;
  
    // Read n (vertices number) and m (edge number)
    int n;
    int m;
    cin >> n >> m;

    g.setup(n); // it creates a graph of v vertices

    // Iterating e(number of edges) times
    for(int i = 0; i < m; i++){
        // Declare empty edge pair
        pair<int, int> edge;
        // Read from standard input
        cin >> edge.first >> edge.second;
        // Add edge to graph object g
        g.add_edge( edge.first, edge.second );
    }

    // Return graph object
    return g;
}

// [Read vector representing vertex positions]
// Inputs: vector
// Output: Pi vector
vector <int> GraphPos(int v){
    vector <int> pi;

    // iterate v(number of vertices) times
    for(int i = 0; i < v; i++){
        // Read vertex from stdin
        int vertex;
        cin >> vertex;
        pi.push_back(vertex);
    }
  
    // Return vector vith ordered vertices
    return pi;
}

// [Compute D taking two params (vertices) method]
// Inputs: graph g, vector pi
// Outputs: Max distance
int ComputeD(graph g, vector<int> pi){
    int D = 0;

    for (auto i = g.begin(); i != g.end(); ++i){
        D += abs(pi.at(i->first) - pi.at(i->second));
    }
    
    return D;
}
