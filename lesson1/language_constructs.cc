// This file contains examples on all of the language constructs that we used.

// <-- to double slashes indicate a comment. Compiler will ignore rest of the
//     line.

#include <iostream>  // In order to print/read text to/from the console
                     // we have to use a library that provides that
                     // functionality. This is how we do it.

using namespace std;  // Different "things" can live in different namespaces.
                      // We can either access them with full name,
                      // like: std::cout, or we can ask the compiler to also
                      // look for a name in a specific namespace by
                      // "using namespace".

int main() {  // Program start.
  // Printing staff to the console.
  cout << "Hello ";
  cout << endl;  // new line.
  cout << 1;
  cout << " ";
  cout << 2.5;
  cout << " ";
  cout << 9 / 5;
  cout << " ";
  cout << 4 / 3 * 5;
  cout << endl << "We can chain these "
       << "in " << 1 << " line." << endl;

  // Creating variables.
  // type name;
  int interger_number;
  float decimal_number;
  double double_precigion;
  bool boolean_flag;

  // Assigning values.
  interger_number = 3;
  decimal_number =
      4.1 * 5;  // Compiler might complain about narrowing double to float.
                // You can change 4.1 to 4.1f to indicate that you want float.
  double_precigion = 6.9;
  boolean_flag = true;

  // Creating variable and assigning.
  int another_integer_number = 6;

  // Reading variables from console.
  cout << "Insert two integers: ";
  cin >> interger_number >> another_integer_number;
  cout << "You entered: "
       << interger_number
       << " "
       << another_integer_number
       << endl;

  // if/else. All comparators: < > <= >= == (!!!!don't mistake for = ) !=
  if (1 < 2) {
    cout << "Printed: 1" << endl;
  }

  if (2 > 3) {
    cout << "Not printed: 2" << endl;
  }

  if (3 >= 4) {
    cout << "Not printed: 3" << endl;
  } else {
    cout << "Printed: 4" << endl;
  }

  if (4 == 5) {
  } else {
    cout << "You can do ";
    cout << "anything here." << endl;
    if (5 < 6) {
      cout << "Even other ifs." << endl;
    }
  }

  if (boolean_flag) { // Using a variable of type bool.
    cout << "Printed: 5" << endl;
  }

  // Chaining if/else can be useful.
  if (6 != 6) {
    cout << "Not printed: 6" << endl;
  } else if (6 > 7) {
    cout << "Not printed: 7" << endl;
  } else {
    cout << "Printed: 8" << endl;
  }

  // While loop. If you accidentally wrote an infinite loop - press Ctrl + C.
  // to kill your program.
  bool condition = true;
  while (condition) {
    int user_answer;
    cout << "Loop again (0 for no): ";
    cin >> user_answer;
    if (user_answer == 0)
      condition = false;
  }

  return 0;
}
