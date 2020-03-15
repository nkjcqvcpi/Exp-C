//
//  16_15.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/20.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    double da=100,de=100;
    int i=0;
    while (de<=da){
        da += 10;
        de *= 1.05;
        i++;
    }
    printf("%d %lf %lf\n",i,da,de);
    return 0;
}
