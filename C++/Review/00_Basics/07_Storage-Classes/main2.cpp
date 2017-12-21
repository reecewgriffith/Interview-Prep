#include <iostream>
 
int count ;
extern void write_extern();
 
//compile with support.cpp
//$g++ main2.cpp support.cpp -o write
//./write
main() {
   count = 5;
   write_extern();
}