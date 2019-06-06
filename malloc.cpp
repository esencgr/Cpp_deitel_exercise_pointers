// Dynamic memory and using malloc (memory allocation).
#include <iostream>
#include <stdlib.h>
using namespace std;

// This function's input is an pointer and the function is changes the value of pointer.
int f ( int *p ){
    *p = 10;
}

int main(){

    /* The 'arr' is a 3-dimensional array and in 3 integer size allocating memory.
    This value is different of each opeating sys.(64 bit - 32 bit)*/
    int arr[ 3 ];
    int *p = ( int* )malloc( sizeof( int ) * 3 );

    p[ 0 ] = 1;
    p[ 1 ] = 2;
    p[ 2 ] = 3;
    cout << "p[] : " << p[ 0 ] << " " << p[ 1 ] << " " << p[ 2 ] << endl;

    /* In an integer size allocating memory and defined a value of this pointer.*/
    int *q = ( int* )malloc( sizeof( int ));
    *q = 50;
    cout << "first output : " << *q << endl;

    /* The pointer is send to function. And changes pointers values*/
    f( q );
    cout << "function1 output : " << *q << endl;     

    /* Z variable is an initiasl value. And this is a pragmatic approach not using malloc*/
    int z = 20;
    cout << "second output : " << z << endl;
    f( &z );
    cout << "function2 output : " << z << endl;
    return 0;
}
