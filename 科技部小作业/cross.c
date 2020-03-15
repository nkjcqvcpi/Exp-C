//
//  cross.c
//  科技部小作业
//
//  Created by Nkjcqvcpi on 2019/10/20.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    int i,j;
    for (i=1;i<=9;i++){
        for (j=1;j<=i;j++) printf("%d*%d=%2d  ",i,j,i*j);
        printf("\n");
    }
}

