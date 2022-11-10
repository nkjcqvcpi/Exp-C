#include <stdio.h>

int main(void){
    int a[10],b[10],i,j,t;
    for (i=0;i<10;i++) scanf("%d",&a[i]);
    for (i=0;i<9;i++){
        int jMin=i;
        for (j=i+1;j<10;j++) if (a[j]<a[jMin]) jMin = j;
        if (jMin!=i){
            t=a[i];
            a[i]=a[jMin];
            a[jMin] = t;
        }
    }
    for (i=0;i<10;i++) b[i] = a[i];
    for (i=0;i<10;i++) printf("%d ",b[i]);
    printf("\n");
    return 0;
}
