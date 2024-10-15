#!/bin/bash

# Check if at least the filename argument is provided
if [ $# -lt 1 ]; then
    echo "Usage: $0 <filename.cpp> [input_file1.txt input_file2.txt ...]"
    exit 1
fi

# Get the C++ file name
FILENAME=$1
BASENAME=$(basename "$FILENAME" .cpp)

# Compile the C++ file
g++ "$FILENAME" -o "$BASENAME"

# Check if compilation was successful
if [ $? -ne 0 ]; then
    echo "Compilation failed."
    exit 1
fi

# Check if any input files were provided
if [ $# -gt 1 ]; then
    # Loop through all input files provided as arguments
    for INPUTFILE in "${@:2}"; do
        if [ -f "$INPUTFILE" ]; then
            OUTPUTFILE="${INPUTFILE%.txt}_output.txt"  # Create output file name
            ./"$BASENAME" < "$INPUTFILE" > "$OUTPUTFILE"
            echo "Execution completed for $INPUTFILE. Output written to $OUTPUTFILE."
        else
            echo "$INPUTFILE not found."
        fi
    done
else
    # No input files, just run the program
    ./"$BASENAME"
fi

# Optionally delete the compiled executable
rm "$BASENAME"

echo "Executable deleted."
