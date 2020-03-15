//
//  rhodium.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/9/20.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void)
{
    float weight;
    float value;
    printf("Are you worth your weight in rhdium?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");
    scanf("%f",&weight);
    value = 770 * weight * 14.5833;
    printf("You weight in rhodium is worth $%.2f.\n",value);
    printf("You are easily worth that! If rhodium prices drop, \n");
    printf("eat more to maintain your value.\n");
    return 0;
}
