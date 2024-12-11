#include<stdio.h>

void increaning(int n){
    if(n != 1){
        increaning(n - 1);
    }
    printf("%d ", n);
}


int main(){
    int n = 3;

    increaning(n);
    return 0;
}