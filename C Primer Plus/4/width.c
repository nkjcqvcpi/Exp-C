//
//  width.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/9/23.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
#define PAGES 931
int main(void)
{
    printf("*%d*\n",PAGES);
    printf("*%2d*\n",PAGES);
    printf("*%10d*\n",PAGES);
    printf("*%-10d*\n",PAGES);
    return 0;
}
