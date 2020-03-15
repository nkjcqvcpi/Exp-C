//
//  11_3.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/12.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    int d=1;
    while(d>0){
        printf("输入天数：");
        scanf("%d",&d);
        if(d<=0) break;
        printf("%d days are %d weeks, %d days.\n",d,d/7,d%7);
    }
    return 0;
}
