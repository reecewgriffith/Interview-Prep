#include<stdio.h>
int main() {

    //THIS IS MORE C STYLE THAN C++

    /* error because there must be n-1 dimensions defined as far as size
    int a[][][2] = { {{1, 2}, {3, 4}}, 
                    {{5, 6}, {7, 8}}
                    };  // error
    printf("%d", sizeof(a)); 
    getchar();
    */

    int a[][2] = {{1,2},{3,4}}; // Works
    printf("%d", sizeof(a)); // prints 4*sizeof(int)
    getchar();


    int a[][2][2] = { {{1, 2}, {3, 4}}, 
                    {{5, 6}, {7, 8}}
                    }; // Works
    printf("%d", sizeof(a)); // prints 8*sizeof(int)
    getchar();


    return 0;
}