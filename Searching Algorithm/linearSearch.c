#include <stdio.h>

int linear_search(int A[], int n, int x)
{
    int i;

    for(i = 0; i < n; i++) {
        if(A[i] == x) {
            return i + 1;
        }
    }

    i = -1;
    return i;
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

    finder = linear_search(book_shelf, num, book_no);

    if(finder == -1) {
        printf("\nBook not found\n");
    }
    else {
        printf("\n%d no. book found @%d no. shelf\n", book_no, finder);
    }

    return 0;
}
