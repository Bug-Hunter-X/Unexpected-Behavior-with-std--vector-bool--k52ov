#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  // Avoid std::vector<bool>
  std::vector<bool> boolVec(10);  // Demonstrates the issue

  // Solution: Use std::vector<char> or std::vector<int> instead
  std::vector<char> charVec(10);
  
  // Example usage with charVec
  charVec[0] = 1; // True
  charVec[1] = 0; // False

  std::cout << "charVec[0]: " << (int)charVec[0] << std::endl;
  std::cout << "charVec[1]: " << (int)charVec[1] << std::endl;
  
  return 0;
}
