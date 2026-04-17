#include "stdio.h"
#define ARRAY_SIZE 5

void selectionSort(int a[], int len){

	int i, j, temp;
    // Selection sort algorithm (ascending order)
	for(i=0; i<=len-2; i++){
		for (j=i+1; j<=len-1; j++){
			if (a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

void printArray(int a[], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void main(){

	int i, arr[ARRAY_SIZE];
    printf("Enter %d integers:\n", ARRAY_SIZE);
	for(i=0; i < ARRAY_SIZE; i++)
		scanf("%d", &arr[i]);

	selectionSort(arr, ARRAY_SIZE);

	printf("Sorted Array:\n");
	printArray(arr, ARRAY_SIZE);
}