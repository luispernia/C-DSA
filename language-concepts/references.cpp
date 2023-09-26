#include<iostream>

using namespace std;

int main() {

    int a = 10;
    int &r = a;
    // conceptually a reference doesn't consume memory
    // once we initialize a reference the changes on the values will
    // be reflected on the original variable name and on the reference name



    return 0;
}
