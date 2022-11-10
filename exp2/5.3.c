#include <stdio.h>

void dtob(i){
    while(i!=0){
        printf("%d",i%2);
        i/=2;
    };
}

int main(void){
    int num;
    for (num=10;num<=20;num++){
        printf("%d:",num);
        dtob(num);
        printf("\n");
    }
    return 0;
}