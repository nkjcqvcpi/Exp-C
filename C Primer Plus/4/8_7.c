//
//  8_7.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/9/28.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
#define l 3.785
#define k 1.609
int main(void){
    float m,g;
    printf("输入行驶的英里数和消耗汽油的加仑数：");
    scanf("%f %f",&m,&g);
    printf("%.1f\n",g/m);
    printf("%.1f\n",(g/l)/((m/k)/100));
    return 0;
}
