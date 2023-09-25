#include <iostream>

using namespace std;

void functB(int a);

void functA(int a) {
    if(a > 0) {
        printf("%d\n", a);
        functB(a - 1);
    }
}

void functB(int a) {

    if(a > 0) {
        printf("%d\n", a);
        functA(a / 2);
    }

}

int main() {

    int x = 59;
    functA(x);

    return 0;
}
