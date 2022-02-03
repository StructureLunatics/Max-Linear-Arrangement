#ifndef _MY_GRAPH_UTILITIES_

#define _MY_GRAPH_UTILITIES_

#include <vector>
#include <numeric>
#include "graph.hpp"

using namespace std;

graph ReadGraph();
vector<int> GraphPos(int v);
int ComputeD(graph g, const vector<int>& pi);
vector <int> Pi(int v);

#endif

