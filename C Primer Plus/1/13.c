//
//  1_3.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/9/19.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int inch,cm;
    printf("请输入英寸值\n");
    scanf("%d",&inch);
    cm = 2.54 * inch;
    printf("%d\n",cm);
}
