//
//  varwid.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/9/26.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    unsigned width,precision;
    int number = 256;
    double weight = 242.5;
    
    printf("What field width?\n");
    scanf("%d",&width);
    printf("The number is: %*d: \n",width,number);
    printf("Now enter a width and a precision: \n");
    scanf("%d %d",&width,&precision);
    printf("Weight = %*.*f\n",width,precision,weight);
    return 0;
}
