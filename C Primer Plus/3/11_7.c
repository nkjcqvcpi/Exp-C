//
//  11_7.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/9/21.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void)
{
    char u[4];
    float hi,ho;
    printf("输入您的身高（带单位）：");
    scanf("%f,%s[4]",&hi,&u);
    if (u = 'cm') printf("%finch\n",hi/2.54);
    else if (u = 'inch') printf("%fcm\n",hi*2.54);
}
