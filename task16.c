#include <stdio.h>

int func(int n)
{

    if (n == 0)
        return 0;

    int digit = n % 10;

    return digit + func(n / 10);
}

int main()
{
    int n;
    printf("Sonni kiriting: "); scanf("%d", n);

        printf("%d\n", func(n));
}