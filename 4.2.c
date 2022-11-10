#include <stdio.h>

int main(void){
    double s = 0;
    int n,i = 0;
    scanf("%d",&n);

    while(i++ < n) s+=1.0/i;
    printf("%f\n",s);s=0;i=1;

    do{
        s += 1.0/i;
        i++;
    }while(i <= n);
    printf("%f\n",s);
    
    for (i=1,s=0;i<=n;i++) s += 1.0/i;
    printf("%f\n",s);
    return 0;
}
