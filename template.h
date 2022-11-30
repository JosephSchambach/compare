#ifndef FINALPROJECT4_TEMPLATE_H
#define FINALPROJECT4_TEMPLATE_H

#include <iostream>
using namespace std;


template<typename T> // Define template
class Comparison{
public:
   // Function to discover the minimum value of the two
   T min(T a, T b){
       if (a < b) return a;
       else return b;
   }
};
#endif //FINALPROJECT4_TEMPLATE_H

