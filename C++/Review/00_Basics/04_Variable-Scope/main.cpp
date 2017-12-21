#include <iostream>
using namespace std;
 
// Global variable declaration:
int g;
int gg = 50;
 
int main () {
   // Local variable declaration:
   int a, b;
   gg = 27;
 
   // actual initialization
   a = 10;
   b = 20;
   g = a + b;
  
   cout << g;

   //will be what is was defined as locally
   cout << gg;
 
   return 0;
}