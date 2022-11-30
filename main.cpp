#include <iostream>
#include "template.h"
using namespace std;

int main() {
   // Declare template class as int
   Comparison<int> comp;

   int a, b; // Declare two int values
   cout << "Enter two chars ";
   cin >> a >> b; // Get two ints from user

   if (a == b){ // Check for equality
       cout << "\nBoth chars are equal\n";
   }
   else {
       // Else, print the smaller of the two
       int answer = comp.min(a, b); // Check which is smaller
       cout << "\n" << answer << " is smaller\n";
   }

   return 0;
}
