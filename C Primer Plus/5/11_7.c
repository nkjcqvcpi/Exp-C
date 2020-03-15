//
//  11_7.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/12.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
double c(float f){
    return f*f*f;
}

int main(void){
    float f;
    printf("输入一个float型数：");
    scanf("%f",&f);
    printf("%lf\n",c(f));
}
