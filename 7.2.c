#include <stdio.h>
#include <math.h>

int a[]={11,22,33,44,55,66,77,88,99,111};

int main(void){
    int l=0,r=9,n,m;
    scanf("%d",&n);
    while (l!=r){
        m=ceil((l+r)/2);
        if (a[m]>n) r=m-1;
        else l=m;
    }
    if (a[l]==n) printf("%d\n",l);
    else printf("No found!\n");
    return 0;
}