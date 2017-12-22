#include <iostream>
#include <fstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::getline;

using namespace std;

int main() {
    char data1[100];
    char data2[100];

    ofstream outfile;
    outfile.open("form.dat");

    //writing to file using string data1
    cout << "Writing to file " << outfile << endl;
    cout << "Enter your name: ";
    cin.getline(data1, 100);
    outfile << data1 << endl;

    //just writing to string data1
    cout << "Enter your age: "; 
    cin >> data1;
    cin.ignore();

    // again write inputted data into the file using data1
    outfile << data1 << endl;

    outfile.close();

    /******************************************/
    // Now open a file tobe read
    ifstream infile;
    infile.open("form.dat");

    cout << "Reading file: " << endl;

    cout << endl << "Printing entire file: " << endl;
    while (infile >> data2) {
        cout << data2 << endl;
    }
    
    infile.close();

    return 0;
}

/*
// position to the nth byte of fileObject (assumes ios::beg)
fileObject.seekg( n );

// position n bytes forward in fileObject
fileObject.seekg( n, ios::cur );

// position n bytes back from end of fileObject
fileObject.seekg( n, ios::end );

// position at end of fileObject
fileObject.seekg( 0, ios::end );
*/