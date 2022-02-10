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

// [Compute D taking two params (vertices) method]
// Inputs: graph g, vector pi
// Outputs: Max distance
int ComputeD(const graph& g, const vector<int>& pi){
    int D = 0;

    for (auto i = g.begin(); i != g.end(); ++i){
        D += abs(pi.at(i->first) - pi.at(i->second));
    }
    
    return D;
}


// [Initialize pi vector from 0 to n-1]
// Inputs: vertices number n
// Outputs: pi vector
vector <int> Pi(int v){
    // Declaring vector pi with size = number of vertices
    vector <int> pi(v);
    // Filling vector pi from 0 to N-1
    iota(pi.begin(), pi.end(), 0);
    return pi;
}


// [Print vector to stdout]
// Inputs: vector of integers
// Outputs: none
void display(vector <int> v){
    for(auto i: v){
        cout << i << endl;
    }
}