#include<stdio.h>

void hello_function(int n){
    printf("Hello wold\n");
    if (n != 1)
    {
        hello_function(n - 1);
    }
    
}
int main(){
    int n;
    printf("N ni kiriting: ");
    scanf("%d", &n);
    hello_function(n);
}