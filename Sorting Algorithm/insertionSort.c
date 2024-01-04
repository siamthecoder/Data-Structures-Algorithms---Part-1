#include <stdio.h>

void insertionSort(int A[], int n) {
    int i, j, item;

    for(i = 1; i < n; i++) {
        item = A[i];

        // set the jth position for starting the comparison from behind of item
        j = i - 1;

        while(j >= 0 && A[j] > item) {
            // we need to replace the element on j'th position because item is smallest
            A[j+1] = A[j];
            j = j - 1; // for keeping the comparison on
        }

        // Now, A[j] is the real position of item
        A[j + 1] = item; // as we decreased j at the end of while loop
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

    insertionSort(myArr, num);

    printf("\nYour array after sorted in ascending order:\n\n");

    for(i = 0; i < num; i++) {
        printf("Element [%d]: %d\n", i+1, myArr[i]);
    }

    return 0;
}
