//
//  16_5.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/18.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    long i,u,d;
    printf("请输入下限与上限：");
    scanf("%ld %ld",&d,&u);
    for (i = d; i <= u; i++) printf("%5ld %5ld %10ld\n",i,i*i,i*i*i);
    return 0;
}
