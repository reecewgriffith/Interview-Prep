#include <iostream>
#include <ctime>
#include <string>
#include <cstring>
#include <cmath>
#include <cstdlib>

using std::cout;
using std::endl;
using std::cin;
using std::cerr;
using std::string;

#include <iomanip>
using std::setw;

//defining constants
#define WIDTH  5
#define NEWLINE '\n'

//Declaration
extern int a, b;
extern int ans;
extern float f;

//Global Variables
int globe;
int globe_override = 55;

// Function declaration
void func(void);

// function declaration
int max(int num1, int num2);

static int count = 10; /* Global variable */


struct Books {
    char  title[50];
    char  author[50];
    char  subject[100];
    int   book_id;
};

void printBook( struct Books book );

// must always be main for main method, unlike java
// where it matches the file name
int main() {
    
    std::cout << std::endl;

    std::cout << "*** THE BASICS ***" << std::endl;

    std::cout << std::endl;

    // !BASIC SYNTAX
    std::cout << "Hello World!" << std::endl;


    // !COMMENTS
    //This is a single line comment
    
    /*
        This is a multiline comment
    */

    /* you can also connemt out code
        cout << "Hello World!" << endl;
    */
    
    std::cout << endl;


    // !DATA TYPES
    std::cout << "Size of char : " << sizeof(char) << std::endl;
    std::cout << "Size of int : " << sizeof(int) << std::endl;
    std::cout << "Size of short int : " << sizeof(short int) << std::endl;
    std::cout << "Size of long int : " << sizeof(long int) << std::endl;
    std::cout << "Size of float : " << sizeof(float) << std::endl;
    std::cout << "Size of double : " << sizeof(double) << std::endl;
    std::cout << "Size of wchar_t : " << sizeof(wchar_t) << std::endl;

    //can also typdef a data type
    typedef int inches;
    inches height;
    height = 72;
    std::cout << "Type Defined Height: " << height << std::endl;
    
    std::cout << std::endl;

    //enums
    //red = 0, green = 1, blue = 2
    enum color { 
        red, 
        green, 
        blue 
    } c;
    c = blue;
    std::cout << "Blue: " << c << std::endl;

    std::cout << std::endl;

    //follows pattern after assignment
    //so iron is still 0, but steel is 6
    enum armor { 
        iron, 
        leather = 5, 
        steel };
    std::cout << "Iron: " << iron << std::endl;
    std::cout << "Leather: " << leather << std::endl;
    std::cout << "Steel: " << steel << std::endl;

    std::cout << std::endl;

    // !VARIABLE TYPES
    //Definition
    int a, b;
    int ans;
    float f;

    //initialization
    a = 50;
    b = 25;
    ans = a + b;
    std::cout << "ans: " << ans << std::endl;

    f = 100.0/3.0;
    std::cout << "f_res: " << f << std::endl;

    std::cout << std::endl;

    // !VARIABLE SCOPE
    globe = 101;
    std::cout << "Normal Gloabal: " << globe << std::endl;
    globe_override = 606;
    std::cout << "Overriden to: " << globe_override << std::endl;

    std::cout << std::endl;


    // !CONSTANTS/LITERALS
    std::cout <<"\"I have a dream...\"\n\t\b\b– MLK\n\n";

    //can also define constants in main method
    const int  LENGTH = 10;
    int area;  
    
    area = LENGTH * WIDTH;
    std::cout << "Area: " << area;
    std::cout << NEWLINE;

    std::cout << endl;


    // !TIME AND DATE
    // current date/time based on current system
    time_t now = time(0);

    // convert now to string form
    char* dt = ctime(&now);

    cout << "The local date and time is: " << dt;

    // convert now to tm struct for UTC
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    
    cout << "The UTC date and time is:"<< dt << endl;

    cout << "Number of sec since January 1, 1900: " << now << endl;
    
    tm *ltm = localtime(&now);

    // print various components of tm structure.
    cout << "Year: " << 1900 + ltm->tm_year<<endl;
    cout << "Month: "<< 1 + ltm->tm_mon<< endl;
    cout << "Day: "<<  ltm->tm_mday << endl;
    cout << "Time: "<< ltm->tm_hour << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl << endl;

    
    // !BASIC INPUT/OUTPUT
    std::string name;
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Your name is: " << name << endl << endl;

    std::string e_msg = "TEST ERROR MESSAGE";
    cerr << "Error message : " << e_msg << endl << endl;

    // !MODIFIER TYPES
    short int i;           // a signed short integer
    short unsigned int j;  // an unsigned short integer
 
    j = 50000;
 
    i = j;
    cout << "Signed Short: " << i << "\nUnsigned Short: " << j << endl << endl;

    // !STORAGE CLASSES (static)
    while(count--) {
        func();
    }

    cout << endl;

    // !OPERATORS
    //+-*/ etc/

    // !LOOPS
    //for
    //while
    //do while

    // !DECISIONS
    //if else, switch

    // !FUNCTIONS
    // local variable declaration:
    int x = 100;
    int y = 200;
    int ret;

    // calling a function to get max value.
    ret = max(x, y);
    cout << "Max value is : " << ret << endl << endl;

    // !NUMBERS
    // number definition:
    short  s;
    int    i_2;
    long   l;
    float  f_2;
    double d;

    // number assignments;
    s = 10;      
    i_2 = 1000;    
    l = 1000000; 
    f_2 = 230.47;  
    d = 30949.374;

    // number printing;
    cout << "short  s :" << s << endl;
    cout << "int    i :" << i_2 << endl;
    cout << "long   l :" << l << endl;
    cout << "float  f :" << f_2 << endl;
    cout << "double d :" << d << endl;

        // number definition:
    short  ss = 10;
    int    ii = -1000;
    long   ll = 100000;
    float  ff = 230.47;
    double dd = 200.374;

    // mathematical operations;
    cout << "sin(d) :" << sin(dd) << endl;
    cout << "abs(i)  :" << abs(ii) << endl;
    cout << "floor(d) :" << floor(dd) << endl;
    cout << "sqrt(f) :" << sqrt(ff) << endl;
    cout << "pow( d, 2) :" << pow(dd, 2) << endl << endl;

    int p, q;

    // set the seed
    srand( (unsigned)time( NULL ) );

    /* generate 10  random numbers. */
    for( p = 0; p < 10; p++ ) {
        // generate actual random number
        q = rand();
        cout <<"Random # : " << q << endl;
    }

    cout << endl;

    // !ARRAYS
    int arr[10]; // n is an array of 10 integers

    // initialize elements of array n to 0          
    for (int i = 0; i < 10; i++) {
        arr[i] = i + 100; // set element at location i to i + 100
    }
    cout << "Element" << setw(10) << "Value" << endl;

    // output each array element's value                      
    for (int j = 0; j < 10; j++) {
        cout << setw(7)<< j << setw(10) << arr[j] << endl;
    }

    // !STRINGS
    //or can just use string not char[]
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    
    cout << endl << "Greeting message: ";
    cout << greeting << endl << endl;

    /***/

    char str1[10] = "Hello";
    char str2[10] = "World";
    char str3[10];
    int  len ;
 
    // copy str1 into str3
    strcpy( str3, str1);
    cout << "strcpy( str3, str1) : " << str3 << endl;
 
    // concatenates str1 and str2
    strcat( str1, str2);
    cout << "strcat( str1, str2): " << str1 << endl;
 
    // total lenghth of str1 after concatenation
    len = strlen(str1);
    cout << "strlen(str1) : " << len << endl;


    //String Class Specifics
    string sstr1 = "Hello";
    string sstr2 = "World";
    string sstr3;
    int  llen ;
 
    // copy str1 into str3
    sstr3 = sstr1;
    cout << "str3 : " << sstr3 << endl;
 
    // concatenates str1 and str2
    sstr3 = sstr1 + sstr2;
    cout << "str1 + str2 : " << sstr3 << endl;
 
    // total length of str3 after concatenation
    llen = sstr3.size();
    cout << "str3.size() :  " << llen << endl << endl;

    
    // !POINTERS
    int  var1;
    char var2[10];
 
    cout << "Address of var1 variable: ";
    cout << &var1 << endl;
 
    cout << "Address of var2 variable: ";
    cout << &var2 << endl << endl;

    /***/

    int  var = 20;   // actual variable declaration.
    int* ip;        // pointer variable 
 
    ip = &var;       // store address of var in pointer variable
 
    cout << "Value of var variable: ";
    cout << var << endl;
 
    // print the address stored in ip pointer variable
    cout << "Address stored in ip variable: ";
    cout << ip << endl;
 
    // access the value at the address available in pointer
    cout << "Value of *ip variable: ";
    cout << *ip << endl;


    // !REFERENCES
       // declare simple variables
    int    iii;
    double ddd;

    // declare reference variables
    int&    r = iii;
    double& sss = d;

    iii = 5;
    cout << "Value of i : " << iii << endl;
    cout << "Value of i reference : " << r  << endl;

    ddd = 11.7;
    cout << "Value of d : " << ddd << endl;
    cout << "Value of d reference : " << sss  << endl << endl;


    // !STRUCTS
    struct Books Book1;        // Declare Book1 of type Book
    struct Books Book2;        // Declare Book2 of type Book
  
    // book 1 specification
    strcpy( Book1.title, "Learn C++ Programming");
    strcpy( Book1.author, "Chand Miyan"); 
    strcpy( Book1.subject, "C++ Programming");
    Book1.book_id = 6495407;
 
    // book 2 specification
    strcpy( Book2.title, "Telecom Billing");
    strcpy( Book2.author, "Yakit Singha");
    strcpy( Book2.subject, "Telecom");
    Book2.book_id = 6495700;
  
    // Print Book1 info
    cout << "Book 1 title : " << Book1.title <<endl;
    cout << "Book 1 author : " << Book1.author <<endl;
    cout << "Book 1 subject : " << Book1.subject <<endl;
    cout << "Book 1 id : " << Book1.book_id <<endl;
 
    // Print Book2 info
    cout << "Book 2 title : " << Book2.title <<endl;
    cout << "Book 2 author : " << Book2.author <<endl;
    cout << "Book 2 subject : " << Book2.subject <<endl;
    cout << "Book 2 id : " << Book2.book_id <<endl << endl;

    // Print Book1 info
    printBook( Book1 );
   
    // Print Book2 info
    printBook( Book2 );

    return 0;
}

// Function definition
void func( void ) {
    static int i = 5; // local static variable
    i++;
    std::cout << "i is " << i ;
    std::cout << " and count is " << count << std::endl;
}

int max(int num1, int num2) {
    // local variable declaration
    int result;
  
    if (num1 > num2)
       result = num1;
    else
       result = num2;
  
    return result; 
 }

void printBook( struct Books book ) {
    cout << "Book title : " << book.title <<endl;
    cout << "Book author : " << book.author <<endl;
    cout << "Book subject : " << book.subject <<endl;
    cout << "Book id : " << book.book_id <<endl;
}