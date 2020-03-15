//
//  8_3.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/9/27.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    double i;
    scanf("%lf",&i);
    printf("a. The input is %.1f or %.1e\n",i,i);
    printf("b. The input is %+.3f or %.3e\n",i,i);
    return 0;
}
