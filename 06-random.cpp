#include <cmath>
#include <ctime>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  srand(time(NULL));           // Generate random seed
  int secretNum = rand() % 11; // Random number between 0 and 10
  int guess = 0;

  do {
    cout << "Guess the number: ";
    cin >> guess;
    if (guess > secretNum) {
      cout << "Your number is too large" << endl;
    } else if (guess > secretNum) {
      cout << "Your number is too small" << endl;
    }
  } while (secretNum != guess);
  cout << "Congrats! You guessed the number." << endl;

  return 0;
}
