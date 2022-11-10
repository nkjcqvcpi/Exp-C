#include <stdio.h>
#include <stdlib.h>

int main(void){
    int min,max,r;
    scanf("%d %d",&min,&max);
    r=rand() % (max-min) + min;
    printf("%d", r);
    return 0;
}