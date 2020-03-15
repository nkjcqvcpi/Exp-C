//
//  11_1.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/12.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
#define MPH 60
int main(void){
    int m = 1;
    while(m>0){
        scanf("%d",&m);
        if (m <= 0) break;
        printf("%d %d\n",m/MPH,m%MPH);
    }
    return 0;
}
