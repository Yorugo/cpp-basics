// Common math functions
#include <cmath>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  string num1, num2;
  cout << "Enter a number:";
  cin >> num1;
  cout << "Enter another number:";
  cin >> num2;

  // String to Integer
  int nNum1 = stoi(num1);
  int nNum2 = stoi(num2);

  printf("%d + %d = %d\n", nNum1, nNum2, nNum1 + nNum2);
  printf("%d - %d = %d\n", nNum1, nNum2, nNum1 - nNum2);
  printf("%d * %d = %d\n", nNum1, nNum2, nNum1 * nNum2);
  printf("%d / %d = %d\n", nNum1, nNum2, nNum1 / nNum2);  // Integer division
  printf("%d %% %d = %d\n", nNum1, nNum2, nNum1 % nNum2); // %% to escape

  return 0;
}
