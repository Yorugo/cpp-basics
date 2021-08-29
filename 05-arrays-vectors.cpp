#include <iostream>

// Working with Vectors
#include <vector>

using namespace std;

int main(int argc, char **argv) {
  // Arrays
  int arrayNums[10] = {1};
  int arrayNums2[] = {1, 2, 3};
  int arrayNums3[5] = {8, 9};

  cout << "1st Value : " << arrayNums3[0] << endl; // Prints 8

  // Multidimensional arrays
  int arrayNums4[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
  cout << arrayNums4[0][1][1] << endl; // Prints 4

  // Vecotrs
  // Use Vectors when you don't know
  // the size of your arrays
  vector<int> vNums(2);
  vNums[0] = 1;
  vNums[1] = 2;
  vNums.push_back(5);                                 // Add value 5 to vNums[2]
  cout << "Vector Size: " << vNums.size() << endl;    // Prints 3
  printf("Last value of the vector: %d\n", vNums[2]); // Prints 5

  // You can also loop using an array
  int arr[] = {1, 2, 3};
  for (int x : arr) {
    cout << x << endl;
  }

  return 0;
}
