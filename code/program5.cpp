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
int D_rest_aux(int m_rest, int max_edge, int i){
    int D_rest_bc;
    if (m_rest <= i){
        D_rest_bc = m_rest*max_edge;
    } else {
        D_rest_bc = i*max_edge + D_rest_aux(m_rest-i, max_edge-1, i+1);
    }
    return D_rest_bc;
}

int D_rest(int m_rest, int nr_vertices){
    return D_rest_aux(m_rest, nr_vertices-1, 1);
}

int bestcase_distance(const graph& g, const vector<int>& pos, int i){
    int m = g.edges();
    int m_fix = 0;
    int D_fix = 0;
    for (auto j = g.begin(); j != g.end(); ++j){
        if ((j->first > i) && (j->second > i)){
            D_fix += abs(pos[j->first]-pos[j->second]);
            m_fix++;
        }
    }  
    int D_bc = D_fix + D_rest((m-m_fix), pos.size());
    return D_bc;
}

void permutationsbb_aux(const graph& g, vector<int>& pi, int& Dmax, int i){
    if (i == 0){
        int D = ComputeD(g, pi);
        if (D > Dmax){Dmax = D;}
    } else {
        int D_bc = bestcase_distance(g, pi, i);
        if (D_bc > Dmax){
            permutationsbb_aux(g, pi, Dmax, i-1);
        for (int j = 0 ; j < i; j++){
            swap(pi[j], pi[i]);
            permutationsbb_aux(g, pi, Dmax, i-1);
            swap(pi[j], pi[i]);
            }
        } 
    }
}

int permutationsbb(const graph& g, vector<int>& pi){
    int Dmax = 0;
    if (g.edges() != 0){
        Dmax = ComputeD(g, pi);
        permutationsbb_aux(g, pi, Dmax, pi.size()-1);
    }
    return Dmax;
}

int main(){
    int AllG;
    cin >> AllG;
    for (int i = 0; i < AllG; i++){
        graph g = ReadGraph();
        vector<int> pi = Pi(g.vertices());
        int Dmax = permutationsbb(g, pi);
        cout << Dmax << endl;
    }
}
