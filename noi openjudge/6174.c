#include <stdio.h>

int main(){
    int n,g=0,s=0,b=0,i,j,k;
    scanf("%d",n);
    for (;n>0;n--){
        scanf("%d %d %d",&i,&j,&k);
        g+=i;
        s+=j;
        b+=k;
    }
    printf("%d %d %d %d",g,s,b,g+s+b);
}