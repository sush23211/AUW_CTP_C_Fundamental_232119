#include <cs50.h>
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y);

    int sum = add(x, y);
    printf("Sum = %d\n", sum);

    return 0;
}

