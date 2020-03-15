//
//  11_4.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/12.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    float h;
    int f;
    printf("Enter a height in centimeters:");
    scanf("%f",&h);
    f=(int)(h/30.48);
    printf("%.1f cm = %d feet, %.1f inches\n",h,f,((h-(f*30.48)))/2.54);
    while(h>0){
        printf("Enter a height in centimeters (<=0 to quit):");
        scanf("%f",&h);
        if (h<=0) break;
        f=h/30.48-0.5;
        printf("%.1f cm = %d feet, %.1f inches\n",h,f,((h-(f*30.48)))/2.54);
    }
    printf("bye\n");
    return 0;
}
