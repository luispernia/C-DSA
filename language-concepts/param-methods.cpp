#include<iostream>

using namespace std;

void passByValue(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void passByAddress(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void passByReference(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}


int main() {

    int a = 32;
    int b = 23;
    passByValue(a, b);
    passByAddress(&a, &b);
    passByReference(a, b);

    cout << a << endl << b << endl;

    return 0;
}
