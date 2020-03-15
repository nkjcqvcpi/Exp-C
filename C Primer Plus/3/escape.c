//
//  escape.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/9/21.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void)
{
    float salary;
    printf("\aEnter your desired monthly salary: ");
    printf(" $_____\b\b\b\b\b\b\b");
    scanf("%f",&salary);
    printf("\n\t$%.2f a month is $%.2f a year.",salary,
           salary * 12.0);
    printf("\rGee!\n");
    return 0;
}
