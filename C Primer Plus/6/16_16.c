//
//  16_16.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/20.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    double a=1000000;
    int i=0;
    while (a>0){
        a *= 1.08;
        a -= 100000;
        i++;
    }
    printf("%d\n",i);
}
