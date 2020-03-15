//
//  12_7.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/9/19.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>

void two(void)
{
    printf("two\n");
}

void one_three(void)
{
    printf("one\n");
    two();
    printf("three\n");
}

int main(void)
{
    printf("starting now:\n");
    one_three();
    printf("done!\n");
}
