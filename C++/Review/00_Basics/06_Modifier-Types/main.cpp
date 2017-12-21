#include <iostream>
using namespace std;
 
/* This program shows the difference between
   * signed and unsigned integers.
*/
int main() {
   short int i;           // a signed short integer
   short unsigned int j;  // an unsigned short integer

   j = 50000;

   i = j;

   //output: -15536 50000
   cout << i << " " << j;

   return 0;
}