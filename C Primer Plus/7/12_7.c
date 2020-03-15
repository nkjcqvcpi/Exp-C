//
//  12_7.c
//  7
//
//  Created by Nkjcqvcpi on 2019/10/24.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
#define bs 10.00
#define t1 0.15
#define t2 0.20
#define t3 0.25
int main(void){
    float h,w,i,t;
    scanf("%f",&h);
    
    if (h <= 40) w = bs * h;
    else w = (40 + (h - 40) * 1.5) * bs;
    
    if (w <= 300) t = t1 * w;
    else if (w <= 450) t = t1 * 300 + t2 * (w - 300);
    else t = t1 * 300 + t2 * (w - 300) + t3 * (w - 450);
    
    i = w - t;
    
    printf("%f %f %f\n",w,t,i);
}
