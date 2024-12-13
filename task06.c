#include<stdio.h>

int order_line(int a, int b)
{//ikki sonni ikubini topuvchi recurcive function
    if (b != 0)
        return order_line(b, a % b);
        else
        {
            return a;
        }
        
    
}

int main()
{
    int n1, n2;

    printf("1 - sonni kiriting: ");
    scanf("%d", &n1);
    printf("Ikki sonni kiriting: ");
    scanf("%d", &n1);

    printf(" EKUBi: %d\n", order_line(n1, n2));

    return 0;
}
