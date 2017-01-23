#include <iostream>
using namespace  std;

int main() {
  for (int i = 10; i < 20; ++i) {
    bool printed_smth = false;
    if (i % 2 == 0) {
      cout << "foo";
      printed_smth = true;
    }
    if (i % 3 == 0) {
      if (printed_smth) {
        cout << " ";
      }
      cout << "bar";
      printed_smth = true;
    }
    if (i % 5 == 0) {
      if (printed_smth) {
        cout << " ";
      }
      cout << "baz";
      printed_smth = true;
    }
    if (printed_smth) {
      cout << " <- " << i << "!" << endl;
    }
  }
  return 0;
}
