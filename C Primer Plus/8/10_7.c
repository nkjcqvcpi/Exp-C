//
//  10_7.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/26.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
#define b1 8.75
#define b2 9.33
#define b3 10.00
#define b4 11.20
#define t1 0.15
#define t2 0.20
#define t3 0.25

void start(void){
    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("a) $8.75/hr                     b) $9.33/hr\n");
    printf("c) $10.00/hr                    d) $11.20/hr\n");
    printf("q) quit\n");
    printf("*****************************************************************\n");
}

float wage(int y,float h){
    float w,bs=0;
    switch(y){
        case 1:bs = b1;break;
        case 2:bs = b2;break;
        case 3:bs = b3;break;
        case 4:bs = b4;break;
    }
    if (h <= 40) w = bs * h;
    else w = (40 + (h - 40) * 1.5) * bs;
    return w;
}

float tax(float w){
    float t;
    if (w <= 300) t = t1 * w;
    else if (w <= 450) t = t1 * 300 + t2 * (w - 300);
    else t = t1 * 300 + t2 * (w - 300) + t3 * (w - 450);
    return t;
}

int main(void){
    char i;
    float h,w;
    while(1){
        start();
        scanf("%c",&i);
        switch (i) {
            case 'a':
                scanf("%f",&h);
                w = wage(1,h);
                printf("%f %f %f\n",w,tax(w),w-tax(w));
                break;
            case 'b':
                scanf("%f",&h);
                w = wage(2,h);
                printf("%f %f %f\n",w,tax(w),w-tax(w));
                break;
            case 'c':
                scanf("%f",&h);
                w = wage(3,h);
                printf("%f %f %f\n",w,tax(w),w-tax(w));
                break;
            case 'd':
                scanf("%f",&h);
                w = wage(4,h);
                printf("%f %f %f\n",w,tax(w),w-tax(w));
                break;
            case 'q':
                goto quit;
                break;
            default:
                break;
        }
        getchar();
        printf("\n");
    }
    quit: return 0;
}

