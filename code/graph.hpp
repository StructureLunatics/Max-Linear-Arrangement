#ifndef _MY_GRAPH_

#define _MY_GRAPH_

#include <vector>
#include <list>
#include <unordered_map>
#include <set>

using namespace std;

class graph: public list<pair<int,int> > {
private:
  int n;
public:
  unordered_map<int,set<int> > neighbours;

  graph();
  void setup(int n);
  void add_edge(int u, int v);
  int vertices() const;
  int edges() const;
  bool is_edge(int u, int v) const;
  int degree(int v) const;
};

#endif 
