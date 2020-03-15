//
//  8_2.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/9/27.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    char n[100];
    printf("输入名字：");
    scanf("%s",n);
    printf("\"%s\"\n",n);
    printf("\"%20s\"\n",n);
    printf("\"%-20s\"\n",n);
    printf("\"   %s\"\n",n);
    return 0;
}
