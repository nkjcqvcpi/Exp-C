//
//  pizza.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/9/22.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
#define PI 3.14159
int main (void)
{
    float area,circum,radius;
    
    printf("What is the radius of your pizza?\n");
    scanf("%f",&radius);
    area=PI*radius*radius;
    circum=2.0*PI*radius;
    printf("Your basic pizza parameters are as follows: \n");
    printf("circumference = %1.2f,area = %1.2f\n",circum,area);
    return 0;
}
