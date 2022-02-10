#!/bin/bash
echo "Compiling Programs..."
make clean >/dev/null
make all >/dev/null

# Execution time Program 2
{ time ./program2.x < test/godzilla6.txt > /dev/null 2>&1; } 2> test/program2/time2.txt

# Execution time Program 3
{ time ./program3.x < test/godzilla6.txt > /dev/null 2>&1; } 2> test/program3/time3.txt

# Execution time Program 4
{ time ./program4.x < test/godzilla6.txt > /dev/null 2>&1; } 2> test/program4/time4.txt

# Execution time Program 5
{ time ./program5.x < test/godzilla6.txt > /dev/null 2>&1; } 2> test/program5/time5.txt