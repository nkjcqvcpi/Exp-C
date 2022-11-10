#include <stdio.h>

int a[10],b[10],i,j,n=0,t;

int main(void){
    for (i=0;i<10;i++){
        scanf("%d",&a[i]);
        if (a[i]>0){
            b[n]=a[i];
            n++;
        }
    }
    for (j=0;j<n;j++)
        for (i=0;i<n-1;i++){
            if (b[i]>b[i+1]){
                t = b[i+1];
                b[i+1] = b[i];
                b[i] = t;
            }
        }
    for (i=0;i<10;i++) printf("%d ",b[i]);
    printf("\n");
    return 0;
}