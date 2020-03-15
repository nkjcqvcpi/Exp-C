//
//  11_2.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/12.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    int z,i;
    printf("输入一个整数：");
    scanf("%d",&z);
    for (i=z;i<=z+10;i++) printf("%d ",i);
    printf("\n");
    return 0;
}
