#include <stdio.h>

int main()
{
    int n, result;

    scanf("%d", &n);

    result = n * (n + 1) / 2; //for any input of n our 4 operation will be constant

    //So, time complexity is O(1)

    printf("result: %d\n", result);

    return 0;
}
