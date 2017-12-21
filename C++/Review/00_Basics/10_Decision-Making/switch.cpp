#include<iostream>
using namespace std;

int main()
{
    char myinput;
    cin >> myinput;

    switch (myinput)
    {
        case 'a':
            cout << "Run program 1\n";
            break;
        case 'b': 
        {
            cout << "Run program 2\n";
            cout << "Please Wait\n";
            break;
        }
        default:
            cout << "Invalid choice\n";
            break;
    }
    return 0;
}