#include <cs50.h>
#include <stdio.h>

void checkEvenOdd(int n)
{
    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}

int main(void)
{
    int n;
    scanf("%d", &n);

    checkEvenOdd(n);
    return 0;
}
