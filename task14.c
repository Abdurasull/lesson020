#include<stdio.h>

int karra = 1;
void karra_function(int n){
    //karra jadvalini uchun function
    printf("  %d x %d = %d\n", n, karra, n*karra);
    if(karra != 9){
        karra++;
        karra_function(n);
    }
}
int main(){
    int n;
    printf("Qaysi karra jadvali kerak?\n Iltimos shu erga kiriting: "); 
    scanf("%d", &n);

    karra_function(n);
}