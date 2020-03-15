#include <stdio.h>
#include <math.h>
int main(void){
    float a,b,c,p;
    while(1){
        scanf("%f %f %f",&a,&b,&c);
        if (a+b>c && a+c>b && b+c>a) {
            p = (a+b+c)/2;
            printf("S= %f, C= %f\n",sqrt(p*(p-a)*(p-b)*(p-c)),2*p);
            break;
        }
        else printf("不能组成三角形\n");
    }
    return 0;
}

