#!/bin/sh

# Get the list of all C files in the current directory
files=$(find . -name "*.c")

# Compile each C file into an object file
for file in $files; do
  echo "Compiling $file..."
  gcc -c $file
done

# Create the static library
ar -rcs liball.a *.o

# Cleanup
rm *.o

echo "Static library created successfully!"

