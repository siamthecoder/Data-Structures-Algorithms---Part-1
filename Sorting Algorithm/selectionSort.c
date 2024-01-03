#include <stdio.h>

void selectionSort(int A[], int n) {
    int i, j, indexMin, tmp;

    for(i = 0; i < n-1; i++) {
        indexMin = i; // for assuming that at i'th position we have the smallest element

        for(j = i + 1; j < n; j++) { // checking for any smallest element among rest of the elements after i'th position
            if(A[j] < A[indexMin]) {
                indexMin = j; // if element @ i'th position is not smallest then capturing the position of smallest element, which is j'th
            }
        }

        if(indexMin != i) { // A[i] & A[indexMin] elements need to be replaced
            tmp = A[i];
            A[i] = A[indexMin];
            A[indexMin] = tmp;
        }
    }
}

int main()
{
    int num;

    printf("Enter the number of elements in your array: ");
    scanf("%d", &num);

    int myAr[num];

    for(int i = 0; i < num; i++) {
        printf("Element [%d]: ", i + 1);
        scanf("%d", &myAr[i]);
    }

    selectionSort(myAr, num);

    printf("The array after sorted in ascending order: \n");
    for(int i = 0; i < num; i++) {
        printf("Element [%d]: %d\n", i + 1, myAr[i]);
    }

    return 0;
}
