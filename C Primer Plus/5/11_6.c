//
//  11_6.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/12.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    int count,sum,i;
    scanf("%d",&i);
    count = 0;
    sum = 0;
    while (count++ < i) sum = sum + count*count;
    printf("sum = %d\n",sum);
    return 0;
}
