#include <stdio.h>

int binary_search(int A[], int n, int x)
{
    int left, right, mid;
    left = 0;
    right = n - 1;

    while(left <= right) {
        mid = left + (right - left) / 2;

        if(A[mid] == x) {
            return mid;
        }
        else if(A[mid] < x) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int num, book_no, finder;

    printf("Enter the number of books: ");
    scanf("%d", &num);

    int book_shelf[num];

    for(int i = 0; i < num; i++) {
        printf("Enter the book no. @%d no. shelf: ", i + 1);
        scanf("%d", &book_shelf[i]);
    }

    printf("Enter the book no. to search in the book shelf: ");
    scanf("%d", &book_no);

    finder = binary_search(book_shelf, num, book_no);

    if(finder == -1) {
        printf("\nBook not found\n");
    }
    else {
        printf("\n%d no. book found @%d no. shelf\n", book_no, finder + 1);
    }

    return 0;
}

