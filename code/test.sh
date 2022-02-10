#!/bin/bash
echo "Compiling Programs..."
make clean >/dev/null
make all >/dev/null

# Testing Program 1
./program1.x < test/program1/input0.txt > test/program1/myout0.txt
if [[ $(diff test/program1/output0.txt test/program1/myout0.txt) ]]; then
    echo "ERROR!"
else
    echo "OK! Program1 passed the test"
fi

# Testing Program 2
./program2.x < test/program2/input0.txt > test/program2/myout0.txt
if [[ $(diff test/program2/output0.txt test/program2/myout0.txt) ]]; then
    echo "ERROR!"
else
    echo "OK! Program2 passed the test"
fi

# Testing Program 3
./program3.x < test/program3/input0.txt > test/program3/myout0.txt
if [[ $(diff test/program3/output0.txt test/program3/myout0.txt) ]]; then
    echo "ERROR!"
else
    echo "OK! Program3 passed the test"
fi

# Testing Program 4
./program4.x < test/program4/input0.txt > test/program3/myout0.txt
if [[ $(diff test/program4/output0.txt test/program4/myout0.txt) ]]; then
    echo "ERROR!"
else
    echo "OK! Program4 passed the test"
fi

# Testing Program 5
./program3.x < test/program5/input0.txt > test/program3/myout0.txt
if [[ $(diff test/program5/output0.txt test/program5/myout0.txt) ]]; then
    echo "ERROR!"
else
    echo "OK! Program5 passed the test"
fi