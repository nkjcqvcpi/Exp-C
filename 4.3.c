#include <stdio.h>

int main(void){
    int i;
    for (i=10;i<=100;i++) if (i%3==0&&i%10!=3) printf("%d\n",i);
    return 0;
}