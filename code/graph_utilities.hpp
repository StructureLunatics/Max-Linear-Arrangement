#ifndef _MY_GRAPH_UTILITIES_

#define _MY_GRAPH_UTILITIES_

#include <vector>
#include <numeric>
#include "graph.hpp"

using namespace std;

graph ReadGraph();
int ComputeD(const graph& g, const vector<int>& pi);
vector <int> Pi(int v);
void display(vector <int> v); //Only used if programxb.cpp (programs creating D vector, then printing)

#endif

