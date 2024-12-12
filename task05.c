#include<stdio.h>

void order_line(int n, int m){
    // Parametirdan parametrgacha tartib bn chiqaruvchi function
    printf("%d ", n);
    if (n > m)
    
    {
        
        order_line(n - 1, m);
        
    }else if (n < m)
    {
        order_line(n + 1, m);
    }
    
    
    
}
int main(){
    int n, m;
    printf("1-argumentni kiriting: ");
    scanf("%d", &n);

    printf("2-argumentni kiriting: ");
    scanf("%d", &m);

    order_line(n, m);
}