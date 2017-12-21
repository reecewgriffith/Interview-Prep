#include<iostream>
using namespace std;

int main()
{
    int A;
    cin >> A;
    if ( A == 10 )
    {
        cout << "is equal" << '\n';
        cout << "closing program" << '\n';
    }
    else if (A == 20)
    {
        cout << "WOW!" << endl;
    } 
    else 
    {
        cout << "not equal" << '\n';
        cout << "closing program" << '\n';
    }
    return 0;
}