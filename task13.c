#include<stdio.h>

int fuctor1(int n){
    
    
    if (n == 1)
    {
        return 1;
    } 

    return n*fuctor1(n - 1);
    
    
}

int main(){

    int a = 5;

    printf("%d", fuctor1(a));
    return 0;
}