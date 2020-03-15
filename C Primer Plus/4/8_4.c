//
//  8_4.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/9/27.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    float h;
    char n[100];
    printf("输入身高（以英寸为单位）和名字：");
    scanf("%f %s",&h,n);
    printf("%s, you are %f feet tall\n",n,h/12);
}
