#include <stdio.h>

int main()
{
    int i, j, k, n, count = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(k = 0; k < n; k++) {
            for(j = 0; j < n; j++) {
                count += 1; //count is equivalent to n^3
            }
        }
    } //time complexity is O(n^3)

    printf("Count: %d\n", count);

    return 0;
}

