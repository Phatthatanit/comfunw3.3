#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int c, d, i, j, input[4];;
void sq1() {
    for (i = 0; i < input[0]; i++)
    {
        for (j = 0; j < input[1]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void sq2() {
    for (i = 0; i < input[2]; i++)
    {
        for (j = 0; j < input[3]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main() {
    printf("(1)Enter 2 numbers : ");
    scanf("%d %d", &input[0], &input[1]);
    printf("(2)Enter 2 numbers : ");
    scanf("%d %d", &input[2], &input[3]);
    c = input[0] * input[1];
    d = input[2] * input[3];
    if (input[0] == 1 && input[1] == 1 && input[2] == 1 && input[3] == 1) {
        printf("This is dot\n");
        sq1();
    }
    else if (c == d) {
        if (input[0] == 1 || input[1] == 1 || input[2] == 1 || input[3] == 1) {
            printf("Draw\nLine area is %d\n", c);
            sq1();
        }
        else {
            printf("Draw\nArea is %d\n", c);
            sq1();
        }
    }

    else if (c > d) {
        printf("Area(1) is bigger than Area(2)\nArea(1) is %d\n", c);
        sq1();
    }

    else {
        printf("Area(2) is bigger than Area(1)\nArea(2) is %d\n", d);
        sq2();
    }
    return 0;
}

