#include <stdio.h>

int main()
{
    int n, result = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        result += i;
    }

    //for several input of n our operations will not be constant

    //So, time complexity is O(n) because in loop number of operations equivalent to n

    printf("result: %d\n", result);

    return 0;
}

