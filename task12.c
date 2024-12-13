#include<stdio.h>

int fib1 = 0, fib2 = 1, fibx = 0;

int fibo_function(int n){ 
    // fobonatchi sonlarni chiqaruvchi function
    if(n >= 2){
        fibx = fib1 + fib2;
        fib1 = fib2;
        fib2 = fibx;
        fibo_function(n - 1);

    } else 
    {
        return fibx;
    }
    
}

int main(){
    int n;
    printf("fibonatchining 1- va 2- hadi aniq shuning uchun 3 dan yuqori tartib raqam kiriting!\n Raqam kiriting: ");
    scanf("%d", &n);
    printf("result: %d", fibo_function(n));
}