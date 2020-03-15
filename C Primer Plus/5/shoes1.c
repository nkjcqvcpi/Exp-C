//
//  shoes1.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/9/28.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
#define ADJUST 7.64
#define SCALE 0.325
int main(void){
    double shoe,foot;
    shoe = 9.0;
    foot = SCALE*shoe+ADJUST;
    printf("Shoe size (men's) foot length\n");
    printf("%20.1f %15.2f inches\n",shoe,foot);
    return 0;
}
