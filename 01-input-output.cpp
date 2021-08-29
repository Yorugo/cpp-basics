// Input Output Stream
#include <iostream>

// Required for cout and endl to print to screen
using namespace std;

// Global variables and constants
int imGlobal = 0;
const double PI = 3.141;

int main(int argc, char **argv) {
  // A way to print to screen.
  // endl creates a new line at the end, no need for \n
  cout << "Hello World!" << endl;

  bool imBoolean = true;
  char imChar = 'A';
  int imInt = 4;
  float imFloat = 1.5;
  string imString = "Hello";
  auto imSomething = 4;
  auto imSomethingElse = "I'm a String";

  // Printing
  // Booleans are printing as integers
  printf("Boolean : %d\n", imBoolean);
  printf("Character : %c\n", imChar);
  printf("Integer : %d\n", imInt);
  printf("Float : %f\n", imFloat);
  printf("Auto(Int) : %d\n", imSomething);
  printf("Auto(String) : %s\n", imSomethingElse);

  // We can also print like this
  // Booleans are printing as integers
  cout << "Boolean : " << imBoolean << endl;
  cout << "Character : " << imChar << endl;
  cout << "Integer : " << imInt << endl;
  cout << "Float : " << imFloat << endl;
  cout << "String : " << imString << endl;
  cout << "Auto(Int) : " << imSomething << endl;
  cout << "Auto(String) : " << imSomethingElse << endl;

  string name;
  int age;

  cout << "Please enter your name: ";
  cin >> name;
  cout << "Please endter your age: ";
  cin >> age;

  cout << "Your name is " << name << " and you are " << age << " years old."
       << endl;

  return 0;
}
