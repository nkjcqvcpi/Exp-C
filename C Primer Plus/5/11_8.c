//
//  11_8.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/12.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
void Temperatures(double f){
    const float T=1.8,C=32.0,K=273.16;
    printf("%.2lfF° %.2lfC° %.2lfK°\n",f,T*f+C,T*f+C+K);
}
int main(void){
    double fa;
    int b=1;
    while (b==1){
        printf("输入一个华氏温度：");
        b = scanf("%lf",&fa);
        if (b!=1) break;
        Temperatures(fa);
    }
    return 0;
}
