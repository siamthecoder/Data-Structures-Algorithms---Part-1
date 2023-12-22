#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n); //space complexity is O(1) because there are only 1 variable

    if(n%2 == 0) { //time complexity is O(1) because for any input of n our 2 operations are constant
        printf("%d is even\n", n);
    }
    else {
        printf("%d is odd\n", n);
    }

    return 0;
}
