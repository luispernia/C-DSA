#include<iostream>

using namespace std;

void fun(int A[]) {
    for(int i = 0; i < 9; i++) {
        cout << A[i] << " ";
    }

    cout << endl;
}

int main() {

    int arr [] = {1,2,3,4,5,6,7,8,9};
    int n = 5;
    fun(arr);

    for(int x:arr)
        cout << x << " ";


    return 0;
}
