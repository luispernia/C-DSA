#include<stdio.h>
#include<iostream>

struct Rectangle
{
    int length; // 4 bytes
    int breadth; // 4 bytes
    char x; // 1 byte - allocating 4 bytes
    double y;
};

using namespace std;

int main() {

    struct Rectangle r1 = {10,5};

    cout << sizeof(r1) << endl;
    cout << r1.breadth << endl;
    cout << r1.length << endl;


    return 0;
}
