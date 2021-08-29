#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  string sAge;
  cout << "Enter your age: " << endl;
  cin >> sAge;
  int nAge = stoi(sAge);

  if (nAge >= 1 && nAge <= 18) {
    cout << "Important Birthday" << endl;
  } else if (nAge == 21 || nAge == 50) {
    cout << "Important Birthday" << endl;
  } else if (nAge >= 65) {
    cout << "Important Birthday" << endl;
  } else {
    cout << "Not an Important Birthday" << endl;
  }

  bool canIVote = (nAge >= 18) ? true : false;

  // Print booleans as true or false, instead of 1 or 0
  cout.setf(ios::boolalpha);
  cout << "Can you vote :" << canIVote << endl;

  return 0;
}
