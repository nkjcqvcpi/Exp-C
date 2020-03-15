//
//  16_9.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/18.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    long l,u,i,s = 0;
    printf("Enter lower and upper integer limits:");
    scanf("%ld %ld",&l,&u);
    for (i = l; i <= u; i++) s+=i*i;
    printf("The sums of the squares from %ld to %ld is %ld\n",l*l,u*u,s);
    while (1){
        s = 0;
        printf("Enter next set of limits:");
        scanf("%ld %ld",&l,&u);
        if(l>=u) break;
        for (i = l; i <= u; i++) s+=i*i;
        printf("The sums of the squares from %ld to %ld is %ld\n",l*l,u*u,s);
    }
    return 0;
}
