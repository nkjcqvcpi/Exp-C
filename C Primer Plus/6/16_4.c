//
//  16_4.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/17.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    char c;
    int i,j,k;
    printf("输入一个大写字母：");
    scanf("%c",&c);
    for (i=1;i<=5;i++){
        for (j=1;j<=(5-i);j++) printf(" ");
        for (j=0;j<i;j++) printf("%c",c-4+j);
        for (k=i-2;k>=0;k--) printf("%c",c-4+k);
        printf("\n");
    }
    return 0;
}
