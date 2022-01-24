# Programming Project
## Algorithms and Data Structures (ADS)

### Appetizer (program1)
Design a simple program that takes a single graph as input, and the position of the vertices, and writes to the standard output the value of D. The program has to call three functions: one to read the graph from the input; another to read a vector with the linear arrangement (corresponding to π) and finally, on that takes two parameters, i.e. the graph and that vector, producing D. Provide the code and the content of your test suit. 

The input of this program is a text consisting of pairs of integers. The first pair indicates n, the number of vertices and m, the number of edges of the graph. After the first pair, there are there are m pairs defining the edges and, finally, a line with n integers indicating the position of every vertex, namely π(0), ..., π(i), ..., π(n). For a tree of 3 vertices, the text format is


### Calculation of D for an ensemble of graphs (program2)
Design a simple program that takes various graphs as input and produces as output the value of D for each of them when vertex labels are interpreted as vertex positions. Provide the code and the content of your test suit. 

The input consists of a number of indicating the number of graphs in the input followed by the definition of each graph following the format described above. For instance, if the input is


### Calculation of Dmax by exhaustive exploration, iterative solution (program3)
Design a simple program that takes various graphs as input and produces as output the value of Dmax for each of them. The results has to be calculated using an exhaustive enumeration of the n! linear arrangements. Use the method described here http://www.cplusplus.com/reference/algorithm/next_permutation/ adapting it to STL vectors. Provide the code and the content of your test suit.

For instance, if the input is


### Calculation of Dmax by exhaustive exploration, recursive solution (program4)
Same as the previous program but using a recursive algorithm for the exhaustive exploration. Provide the code and the content of your test suit, extending or refining the test suit of the previous program.


### Calculation of Dmax applying branch & bound, recursive solution (program5)
Produce a variant of the previous program where the results are obtained applying a branch & bound technique over the implicit tree. Provide the code and the content of your test suit, extending or refining the test suit of previous programs.
