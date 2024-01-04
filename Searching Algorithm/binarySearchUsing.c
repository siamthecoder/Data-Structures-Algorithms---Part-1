#include <stdio.h>
int main()
{
    int ara[100], n, i, j, temp;

    printf("\n\tEnter the size of the array: ");
    scanf("%d", &n);
    printf("\n\tInput the elements of the array: \n");

    for(i = 0; i < n; i++) {
        printf("\n\telement %d: ", i + 1);
        scanf("%d", &ara[i]);
    }

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(ara[i] > ara[j]) {
                temp = ara[j];
                ara[j] = ara[i];
                ara[i] = temp;
            }
        }
    }

    int low_index = 0;
    int high_index = n - 1;
    int mid_index, num;

    printf("\n\tEnter search element: ");
    scanf("%d", &num);

    while(low_index <= high_index) {
        mid_index = (low_index + high_index) / 2;
        if(num == ara[mid_index]) {
            break;
        }
        if(num < ara[mid_index]) {
            high_index = mid_index - 1;
        }
        else {
            low_index = mid_index + 1;
        }
    }

    if(low_index > high_index) {
        printf("\n\tThe element is not found in the array.\n");
    }
    else {
        printf("\n\t%d found at index %d, after sorting this array.\n", num, mid_index);
    }

    return 0;
}
