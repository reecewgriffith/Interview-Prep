#include <iostream>
using namespace std;

#define DEBUG

#define MIN(a,b) (((a)<(b)) ? a : b)

int main () {
   int i, j;
   
   i = 100;
   j = 30;

#ifdef DEBUG
   cerr <<"Trace: Inside main function" << endl;
#endif

#if 0
   //This is commented part
   cout << MKSTR(HELLO C++) << endl;
#endif

   cout <<"The minimum is " << MIN(i, j) << endl;

#ifdef SKIP
   //wont hit because SKIP is not defined
   cerr <<"Trace: Coming out of main function" << endl;
#endif

   return 0;
}