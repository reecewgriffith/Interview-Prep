// Header Files
#include<iostream>

//Main Function

using namespace std;

int main ()
{
  // Variable Declaration
  int a = 200;
  int b = 26;
  int c = 50;
  int d = 40;
  int result;
 
  cout << "Simple Arithmetic Operators Example Program \n";
 
  result = a - b; // subtraction  ( Subtraction or unary minus Arithmetic Operator)
  cout <<"\na - b = "<<result;
 
  result = b * c; // multiplication ( Multiplication Arithmetic Operator)
  cout <<"\nb * c = "<< result;
 
  result = a / c; // division ( Division Arithmetic Operator)
  cout <<"\na / c = "<< result; 
 
  result = a + b * c; // precedence ( Addition or unary plus Arithmetic Operator)
  cout <<"\na + b * c = "<< result;
 
  cout <<"\na * b + c * d = "<< a * b + c * d; // Mixed
  
  return 0;
}