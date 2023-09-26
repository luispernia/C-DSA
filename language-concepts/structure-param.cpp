#include<iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int area(struct Rectangle &r) {
    return r.length + 1223;
}

int main() {

    Rectangle radio = {12, 32};

    radio.length = area(radio);

    cout << radio.length << endl;

    return 0;
}

