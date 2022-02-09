#!/bin/bash
echo "Compiling Programs..."
make clean >/dev/null
make all >/dev/null

# Testing Program 1
{ time ./program1.x < test/program1/input0.txt > test/program1/myout0.txt 2>&1; } 2> test/program1/time1.txt
if [[ $(diff test/program1/output0.txt test/program1/myout0.txt) ]]; then
    echo "ERROR!"
else
    echo "OK! Program1 passed the test"
fi

# Testing Program 2
{ time ./program2.x < test/program2/input0.txt > test/program2/myout0.txt 2>&1; } 2> test/program2/time2.txt
if [[ $(diff test/program2/output0.txt test/program2/myout0.txt) ]]; then
    echo "ERROR!"
else
    echo "OK! Program2 passed the test"
fi

# Testing Program 3
{ time ./program3.x < test/program3/input0.txt > test/program3/myout0.txt 2>&1; } 2> test/program3/time3.txt
if [[ $(diff test/program3/output0.txt test/program3/myout0.txt) ]]; then
    echo "ERROR!"
else
    echo "OK! Program3 passed the test"
fi