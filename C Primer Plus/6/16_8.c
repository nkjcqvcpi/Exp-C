//
//  16_8.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/18.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
double c(double a,double b){
    return (a-b)/(a*b);
}
int main(void){
    double a,b;
    while (scanf("%lf %lf",&a,&b) != 0) printf("%lf\n",c(a,b));
    return 0;
}
