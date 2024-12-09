# Unexpected Behavior with std::vector<bool>

This repository demonstrates a common pitfall in C++ programming involving `std::vector<bool>`. While seemingly space-efficient, it often exhibits unexpected performance characteristics and can lead to subtle bugs. This is because `std::vector<bool>` is specialized to use a bit-packed representation, unlike other `std::vector<T>` instantiations.

The `bug.cpp` file contains code showcasing the unexpected behavior, while `bugSolution.cpp` provides a solution demonstrating best practices.

## Issue:

- Performance overhead:  Operations like accessing individual elements and iterating are slower.
- Iterator type mismatch:  The iterators are not standard random-access iterators, causing compatibility problems with algorithms expecting them.

## Solution:

Consider using alternatives such as `std::vector<char>` or `std::vector<int>` with bit manipulation for boolean data (if space efficiency is crucial), or `std::vector<bool>` (for readability and predictablility).