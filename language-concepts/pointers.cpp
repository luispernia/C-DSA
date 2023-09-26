#include<stdlib.h>
#include<iostream>

using namespace std;

int main() {

    int x = 42;

    int* prt = &x; // declaration and initialization

    cout << *prt << endl; // dereferencing

    // malloc
    //
    // Useful function to allocate memory on heap
    // this memory can be pointed to a pointer variable
    int *p;

    p = (int *) malloc(5 * sizeof(int)); // allocating memory in C
    p = new int[5]; // allocating memory in C++

    // pointer to an array
    int A[5] = {2,4,6,8,10};
    int *point;
    point=A;

    for(int i = 0; i < 5; i++) {
        cout << point[i] << endl;
    }

    // create array in heap
    int *points;
    points = (int *) malloc(5 * sizeof(int));

    points[0] = 10;
    points[1] = 32;
    points[2] = 12;

    for(int i = 0; i < 5; i++)
        cout << points[i] << endl;


    delete [] points; // delete in c++
    free(points); // delete in c


    return 0;
}
