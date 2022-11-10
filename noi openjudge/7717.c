#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if (n % 3==0) putchar("3 ");
    else if (n % 5==0) putchar("5 ");
    else if (n % 7==0) putchar("7");
    else putchar("n");
}