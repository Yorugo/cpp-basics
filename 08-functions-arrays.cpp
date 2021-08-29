#include <iostream>

using namespace std;

double AddNumbers(double num1, double num2);

void PrintName(string name);

// age is a pointer
void AssignAge(int *pAge);

void DoubleArray(int *arr, int size);

int main(int argc, char **argv) {

  printf("%.1f + %.1f = %.1f\n", 5.0, 4.0, AddNumbers(5, 4));
  PrintName("yorugo");

  int age = 40;
  cout << "My age is: " << age << endl; // Prints 40
  AssignAge(&age);
  cout << "My age now is: " << age << endl; // Prints 24

  // When declaring a pointer,
  // it's good practice to give it a null value
  int *pAge2 = NULL;
  pAge2 = &age;
  cout << "Address: " << pAge2 << endl;
  cout << "Value: " << *pAge2 << endl;

  int intArray[] = {1, 2, 3, 4};
  int *pIntArray = intArray;
  cout << "1st address: " << pIntArray << endl;
  pIntArray++;
  cout << "2nd address: " << pIntArray << endl;

  DoubleArray(intArray, 4);
  for (int i = 0; i < 4; i++) {
    cout << "Array " << intArray[i] << endl;
  }

  return 0;
}

double AddNumbers(double num1 = 0, double num2 = 0) { return num1 + num2; }

void PrintName(string name) { cout << name << endl; }

void AssignAge(int *pAge) { *pAge = 24; }

void DoubleArray(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    arr[i] = arr[i] * 2;
  }
}
