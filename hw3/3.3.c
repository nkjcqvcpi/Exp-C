#include <stdio.h>
#include <math.h>

int main(void){
    double x;
    scanf("%lf",&x);
    if (x>0) 
        printf("f(x)= %lf \n",pow(x,3)+log10(fabs(x))-sin(x));
    else if (x<0) 
        printf("f(x)= %lf \n",exp(x)+cos(x));
    else 
        printf("f(x)= %lf \n",sqrt(pow(x,2)+1)-100*x);
    return 0;
}