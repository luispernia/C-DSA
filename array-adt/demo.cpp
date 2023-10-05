#include <algorithm>
#include<iostream>
#include<stdio.h>

using namespace std;

struct Array {

    int *A;
    int length;
    int size;

};

void Display(struct Array arr) {
    int i;
    for(i = 0; i < arr.length; i++) {
        printf("%d", arr.A[i]);
    }
};

int main() {

    struct Array arr;
    int n,i;
    printf("Enter size of an array \n");
    scanf("%d", &arr.size);
    arr.A = (int *) malloc(arr.size * sizeof(int));
    arr.length = 0;

    printf("Enter number of insertionss");

    scanf("%d", &n);
    arr.length = n;

    for(i = 0; i < n; i++)
        scanf("%d", &arr.A[n]);

    Display(arr);

    return 0;
}
