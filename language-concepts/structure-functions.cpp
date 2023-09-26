#include<iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main() {

    Rectangle r = { 0, 0};

    cin >> r.length >> r.breadth;

    cout << r.length << endl;

    return 0;
}
