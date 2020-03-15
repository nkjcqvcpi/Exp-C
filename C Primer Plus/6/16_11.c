//
//  16_11.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/18.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    long i;
    double a,b,n;
    while(1){
        a=0;b=0;
        scanf("%ld",&i);
        for (n=1;n<=i;n++)a+=1/n;
        for (n=1;n<=i;n++){
            if (n/2.0==1) b += 1/n;
            else b -= 1/n;
        }
        printf("%lf %lf\n",a,b);
    }
    return 0;
}
