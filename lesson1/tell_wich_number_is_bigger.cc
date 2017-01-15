#include <iostream>
using namespace std;

int main() {
  int i;
  int j;

  bool user_wants_to_continue = true;

  while (user_wants_to_continue) {
    cout << "Enter two numbers: ";
    cin >> i >> j;

    cout << "You entered: " << i << " " << j << endl;

    if (4 < 5) {

    } else {

    }

    if (5 < 6) {

    } else if (6 < 7) {

    }

    if (i > j) {
      cout << i << " > " << j << endl;
    } else if (i == j) {
      cout << i << " = " << j << endl;
    } else {
      cout << i << " < " << j << endl;
    }

    cout << "Want to continue? (0 for no): ";
    int answer;
    cin >> answer;
    if (answer == 0) {
      user_wants_to_continue = false;
    }
  }

  return 0;
}
