#include<iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

void changeLength(struct Rectangle *p, int size) {

    p->length = size;

}

int main(){

    Rectangle rect = {1,2};
    cout << rect.length << endl;

    changeLength(&rect, 20);

    cout << rect.length << endl;

    return 0;
}
