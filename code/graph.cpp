#include <cassert>
#include "graph.hpp"

graph::graph() {
   n = 0;
}

void graph::setup(int n) {
  clear();
  neighbours.clear();
  this->n = n;
}
void graph::add_edge(int u, int v) {
  assert(0 <= v);
  assert(u <= n - 1);
  assert(0 <= v);
  assert(v <= n - 1);  
  if (not is_edge(u, v)) { 
     push_back(pair<int,int>(u,v));
     neighbours[u].insert(v);
     neighbours[v].insert(u);
  } 
}

int graph::vertices() const {
  return n;
}

int graph::edges() const {
  return size();
}

bool graph::is_edge(int u, int v) const {
  assert(0 <= v);
  assert(u <= n - 1);
  assert(0 <= v);
  assert(v <= n - 1);  
  // unordered_map<int,set<int> >::const_iterator i = neighbours.find(u);
  auto i = neighbours.find(u);
  if (i == neighbours.end()) return false; 
  else return i->second.find(v) != i->second.end();  
}

int graph::degree(int v) const {
  // unordered_map<int,set<int> >::const_iterator i = neighbours.find(v);
  auto i = neighbours.find(v);
  return i->second.size();    
} 

