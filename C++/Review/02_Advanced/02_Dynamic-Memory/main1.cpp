#include <iostream>

using namespace std;

int main() {
    double* pvalue = NULL;
    pvalue = new double;

    *pvalue = 324546.77;
    cout << "Value of *pvalue: " << *pvalue << endl;

    //free up memory
    delete pvalue;

    /*
    char* pvalue  = NULL;         // Pointer initialized with null
    pvalue  = new char[20];       // Request memory for the variable

    delete [] pvalue;             // Delete array pointed to by pvalue

    double** pvalue  = NULL;      // Pointer initialized with null 
    pvalue  = new double [3][4];  // Allocate memory for a 3x4 array

    delete [] pvalue;            // Delete array pointed to by pvalue
    */

    return 0;
}