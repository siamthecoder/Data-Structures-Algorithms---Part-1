#include <stdio.h>

int main()
{
    int i, j, n, count = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            count += 1; //count is equivalent to n^2
        }
    } //time complexity is O(n^2)

    printf("Count: %d\n", count);

    return 0;
}
