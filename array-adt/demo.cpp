#include<iostream>
#include<stdio.h>


struct Array {
	int A[20];
	int size;
	int length;
};

void Display(struct Array arr) {
	int i;
	printf("Elements are\n");
	for (i = 0; i < arr.length; i++)
		printf("%d", arr.A[i]);
}

void Append(struct Array* arr, int x) {
	if (arr->length < arr->size)
		arr->A[arr->length++] = x;
}

void Insert(struct Array* arr, int index, int x) {
	int i;
	if (index >= 0 && index <= arr->length) {
		for (i = arr->length; i > index; i--)
			arr->A[i] = arr->A[i - 1];
		arr->A[index] = x;
		arr->length++;
	}		
}

int Delete(struct Array* arr,int index) {
	if (index >= 0 && index < arr->length) {
		int temp = arr->A[index];
		for (int i = index; i < arr->length - 1; i++)
			arr->A[i] = arr->A[i + 1];
		arr->length--;
		printf("%d Deleted \n", temp);
		return temp;
	}

	return 0;
}

int main() {
	struct Array arr = { {2,3,4,5,6}, 20, 5};
	Insert(&arr, 3, 10);
	Delete(&arr, 3);
	Delete(&arr, 3);
	Delete(&arr, 3);
	Display(arr);

	return 0;
}