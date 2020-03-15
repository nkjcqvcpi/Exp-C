#include <stdio.h>
#include <math.h>

int main(void){
    double a,b,c,s,C,S;
    do
        scanf("%lf %lf %lf",&a,&b,&c);
    while (a+b<=c,printf("Invaild Input\n"));
    C=a+b+c;
    s=(a+b+c)/2;
    S=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("C= %lf ,S= %lf\n",C,S);
    return 0;
}