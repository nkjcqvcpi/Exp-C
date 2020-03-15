//
//  11_1.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/27.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
double min(double x,double y){
    return(x>y ? y : x);
}

int main(void){
    double a,b;
    scanf("%lf %lf",&a,&b);
    printf("%lf\n",min(a,b));
}
