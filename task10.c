#include <stdio.h>

int pow_function(int n, int m)
{
    // n ni m chi darajasini hisoblovchi function
    if (m == 0)
        return 1;

    return n * pow_function(n, m - 1);
}
int main()
{
    int a, b;
    printf("1-sonni kiriting: ");
    scanf("%d", &a);

    printf("2-sonni kiriting: ");
    scanf("%d", &b);

    printf("Result: %d", pow_function(a, b));
}
