#include <stdio.h>

void bubbleSort(int A[], int n) {
    int i, j, tmp;

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(A[i] > A[j]) { // sending the smallest element to starting like bubbling from a pond!
                tmp = A[j];
                A[j] = A[i];
                A[i] = tmp;
            }
        }
    }
}

int main()
{
    int num, i;

    printf("Enter the size of your array: ");
    scanf("%d", &num);

    int myArr[num];

    for(i = 0; i < num; i++) {
        printf("Enter [%d]: ", i+1);
        scanf("%d", &myArr[i]);
    }

    bubbleSort(myArr, num);

    printf("\nYour array after sorted in ascending order:\n\n");

    for(i = 0; i < num; i++) {
        printf("Element [%d]: %d\n", i+1, myArr[i]);
    }

    return 0;
}
