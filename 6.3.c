#include <stdio.h>

int a[10],ia[10],i;

int main(){
    for (i=0;i<10;i++) scanf("%d",&a[i]);
    for (i=9;i>=0;i--) ia[i]=a[9-i];
    for (i=0;i<10;i++) printf("%d ",ia[i]);
    printf("\n");
    return 0;
}
