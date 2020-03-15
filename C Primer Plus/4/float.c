//
//  float.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/9/23.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void)
{
    const double RENT = 3852.99;
    printf("*%f*\n",RENT);
    printf("*%e*\n",RENT);
    printf("*%4.2f*\n",RENT);
    printf("*%3.1f*\n",RENT);
    printf("*%10.3f*\n",RENT);
    printf("*%10.3e*\n",RENT);
    printf("*%+4.2f*\n",RENT);
    printf("*%010.2f*\n",RENT);
    return 0;
}
