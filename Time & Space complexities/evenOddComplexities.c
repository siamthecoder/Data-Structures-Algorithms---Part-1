#include <stdio.h>

int main()
{
    int i, n, even[101];

    for(i = 0; i < n + 1; i++) {
        even[i] = 0;
    }

    for(i = 0; i < n + 1; i += 2) {
        even[i] = 1;
    }

    scanf("%d", &n);

    if(even[n]) {
        printf("%d is even\n", n);
    }
    else {
        printf("%d is odd\n", n);
    }

    return 0;
}
