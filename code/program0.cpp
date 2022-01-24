#include <cmath>
#include <vector>
#include <iostream>
#include "graph.hpp"

using namespace std;

int main()
{
    graph g;  
    g.setup(3); // it creates a graph of 3 vertices
    g.add_edge(0,1);
    g.add_edge(1,2);
    // now g is a graph of 3 vertices
    cout << "The graph has " << g.vertices() << " vertices and " << g.edges() << " edges" << endl;     
    // we will write the edges to the standard output
    cout << "The edges are " << endl;
    for (auto i = g.begin(); i != g.end(); ++i) {
        cout << i->first << " " << i->second << endl;
    }
}
