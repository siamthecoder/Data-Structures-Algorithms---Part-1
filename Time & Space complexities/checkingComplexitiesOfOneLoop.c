#include <stdio.h>

int main()
{
    int j, n, count = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(j = 0; j < n; j++) {
            count += 1; //count is equivalent to n
    }//time complexity is O(n)

    printf("Count: %d\n", count);

    return 0;
}

