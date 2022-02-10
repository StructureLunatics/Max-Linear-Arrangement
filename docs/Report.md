# REPORT: Maximum Linear Arrangement Project



Dante Aviñó, Miguel Borge

---

### 1. Choices and difficulties & Test cases

- **Program 1**
In this first program we had to implement three functions one to read the graph from the input; another to read a vector with the linear arrangement (corresponding to π) and finally, on that takes two parameters, i.e. the graph and that vector, producing D. In order to given a single graph as input, and the position of its vertices, write to the standard output the value of D.



- **Program 2**
  In the second program we had to implement an algorithm given various graphs as input and produces would produce as output the value of D for each of them when vertex labels are interpreted as
  vertex positions.




- **Program 3**
In the third we had to implement three functions one to read the graph from the input; another to read a vector with the linear arrangement (corresponding to π) and finally, on that takes two parameters, i.e. the graph and that vector, producing D. In order to given a single graph as input, and the position of its vertices, write to the standard output the value of D.




- **Program 4**
In the fourth we had to implement three functions one to read the graph from the input; another to read a vector with the linear arrangement (corresponding to π) and finally, on that takes two parameters, i.e. the graph and that vector, producing D. In order to given a single graph as input, and the position of its vertices, write to the standard output the value of D.




- **Program 5**
In the last program we had to implement three functions one to read the graph from the input; another to read a vector with the linear arrangement (corresponding to π) and finally, on that takes two parameters, i.e. the graph and that vector, producing D. In order to given a single graph as input, and the position of its vertices, write to the standard output the value of D.



- **Testing**:
  Test cases used in the different programs we have created different types of inputs such as:
  
  - 0 Edges, to check the response of our program
  - Duplicate edges, to check

  
  
  Two bash files have been created in order to test some of features of out programs:
  - test.sh:
    - Used to execute all the five programs given input0.txt and redirect the gotten output to file myout0.txt to the corresponding test directory of each program, then comparing this output with the expected one.
  - time.sh
    - Using the time function check the execution time of all programs taking godzilla6.txt as input and redirecting the resulting value to a time.txt file in the corresponding test directory of each program.



### 2. Ideas or tricks you have applied to improve efficiency of the algorithms.

- Create a vector containing the computed maximum distances of each graph instead of directly printing the is more time efficient, but we should also consider that this method will use more memory therefore decreasing the memory efficiency.

**program 2** (runs 188.37% times faster)

Printing directly to stdout:
	real    0m51,655s
	user   0m26,297s
	sys     0m3,628s
Store distances in vector then printing vector to stdout (program4b):
	real    0m27,422s
	user   0m19,055s
	sys     0m2,931s

**program 3** (runs 109.86% times faster)

Printing directly to stdout:
	real    0m35,567s
	user   0m35,437s
	sys     0m0,128s
Store distances in vector then printing vector to stdout (program3b):
	real    0m32,375s
	user   0m32,327s
	sys     0m0,048s

**program 4** (runs 115.27% times faster)

Printing directly to stdout:
	real    0m13,989s
	user    0m13,903s
	sys     0m0,084s
Store distances in vector then printing vector to stdout (program4b): 
	real    0m12,136s
	user   0m12,096s
	sys     0m0,024s



### 3. Branch & Bound technique

- In the last program we were asked to use Branch & Bound technique, an algorithm design paradigm that is generally used to solve combinatorial optimization problems. These problems are usually exponential in terms of time complexity and may require exploration of all possible permutations in the worst case. The Branch and Bound algorithm technique solves these problems relatively quickly.

![]()




### 4. Running time & PC specifications

| Program | Compilation | Test suit |   t_i   |  r_i   |
| :-----: | :---------: | :-------: | :-----: | :----: |
|    1    |     YES     |    YES    |    X    |   X    |
|    2    |     YES     |    YES    | 0,244s  |   X    |
|    3    |     YES     |    YES    | 31,764s |   1    |
|    4    |     YES     |    YES    | 11,811s | 0,3718 |
|    5    |     YES     |    YES    | 10.340s | 0.3255 |

- <u>PC specifications:</u>
  - CPU: Intel Core i7-5600U
    - 2 Cores (number of independent central processing units in a single computing component
    - With processor base frequency of 2.60 GHz

  - M.2 Solid-state drive (SSD) to store the files.




### 5. Discussion of the results on the execution time in Table 1



- Time complexity