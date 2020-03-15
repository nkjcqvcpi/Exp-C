//
//  main.c
//  科技部小作业
//
//  Created by Nkjcqvcpi on 2019/10/20.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main(void){
    double a,b,c,d,x1,x2,x1i,x2i;
    scanf("%lf %lf %lf",&a,&b,&c);
    d = b*b-4*a*c;
    if (d>0){
        x1 = (-b+sqrt(d))/(2*a);
        x2 = (-b-sqrt(d))/(2*a);
        printf("x1=%lf x2=%lf\n",x1,x2);
    }
    else if (d==0){
        x1 = (-b+sqrt(d))/(2*a);
        printf("%lf\n",x1);
    }
    else if (d<0){
        x1 = -b/(2*a);
        x1i = -sqrt(-d);
        x2i = sqrt(-d);
        printf("x1=%lf%lfi x2=%lf+%lfi\n",x1,x1i,x1,x2i);
    }
}
