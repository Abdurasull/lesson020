#include <stdio.h>

void Even_numbers(int n)
{
    // Faqat toq sonlani chiqarivchi recurcive function

    if (n % 2 == 1 && n != 1 )
    {
        Even_numbers(n - 2);
        printf("%d ", n - 2);
    }
    else if (n != 1 && n != 2)
    {
        Even_numbers(n - 2);
        printf("%d ", n - 1);
    }
}

int main()
{
    int n;
    printf("Sonni kiriting: ");
    scanf("%d", &n);

    Even_numbers(n);
}