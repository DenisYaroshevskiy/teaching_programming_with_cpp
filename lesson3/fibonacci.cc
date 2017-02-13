#include <iostream>

using namespace std;

int main() {
  cout << "Enter fibonacci number's index: ";
  int index;
  cin >> index;

  if (index == 0) {
    cout << 0 << endl;
    return 0;
  }
  if (index == 1) {
    cout << 1 << endl;
    return 0;
  }

  int prev = 0;
  int cur = 1;

  while (index > 1) { // starting with 2.
    int new_cur = prev + cur;
    prev = cur;
    cur = new_cur;
    --index;
  }

  cout << cur << endl;
  return 0;
}
