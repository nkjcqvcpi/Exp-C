//
//  bottles.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/12.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
#define MAX 100
int main(void){
    int count = MAX + 1;
    while (--count > 0){
        printf("%d bottles of springs water on the wall, %d bottles of spring water!\n",count,count);
        printf("Take one down and press it around, \n");
        printf("%d bottles of spring water!\n\n",count-1);
    }
    return 0;
}
