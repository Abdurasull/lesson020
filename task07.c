#include <stdio.h>


int Ekub(int a, int b)
{//ikki sonni EKUB ni hisoblovchi function
    if (b == 0)
        return a;
    return Ekub(b, a % b);
}

int Ekuk(int a, int b)
{ // ikki sonni EKUk ni hisoblovchi function
    return (a * b) / Ekub(a, b);
}

int main()
{
    int n1, n2;

    printf("1 - sonni kiriting: ");
    scanf("%d", &n1);

    printf("2 - sonni kiriting: ");
    scanf("%d", &n2);

    printf("EKUKi: %d\n", Ekuk(n1, n2));

    return 0;
}
