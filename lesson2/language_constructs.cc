#include <iostream>
using namespace std;

int main() {
  for (int i = 0; // before cycle
       i < 10;    // if true -> go another cycle
       ++i) {     // each iteration update (happens before check)
    cout << i;
  }
  cout << endl;

  for (int i = 0; i < 10; ++i) {
    if (i == 3) {
      continue;  // goes to ++i
    }
    if (i == 7) {
      break;  // exits the loop
    }
    cout << i;
  }
  cout << endl;
  return 0;
}
