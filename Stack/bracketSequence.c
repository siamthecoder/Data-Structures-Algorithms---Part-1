#include <stdio.h>
#include <string.h>

int isCorrect(char input[])
{
    char stack[100], lastChar;
    int top, i, len;

    top = 0;
    len = strlen(input);

    for(i = 0; i < len; i++) {
        if(input[i] == '(') {
            stack[top] = '(';
            top++;
        }
        else if(input[i] == ')') {
            if(top == 0) {
                // Stack empty
                return 0;
            }
            top--;
            lastChar = stack[top];

            if(lastChar != '(') {
                return 0;
            }
        }
    }

    if(top == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main()
{
    char input[100];

    scanf("%s", input);

    if(isCorrect(input)) {
        printf("%s is balanced\n", input);
    }
    else {
        printf("Sorry\n");
    }

    return 0;
}
