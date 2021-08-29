#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  int i = 1;

  while (i <= 20) {
    if (i % 2 == 0) {
      i++;
      continue;
    }
    cout << i << endl;
    i += 3;
  }

  // Does the same as the above
  i = 1;
  while (true) {
    if (!(i <= 20)) {
      break;
    }
    if (i % 2 == 0) {
      i++;
      continue;
    }
    cout << i << endl;
    i += 3;
  }

  // Does the same as well
  for (int i = 1; i <= 20; i++) {
    if (i % 2 == 0) {
      continue;
    }
    cout << i << endl;
    i += 2;
  }

  i = 1;
  do {
    cout << "I happen at least once" << endl;
  } while (i > 1000);

  return 0;
}
