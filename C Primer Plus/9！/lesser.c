//
//  lesser.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/26.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int imin (int n, int m){
    int min;
    
    if (n < m) min = n;
    else min = m;
    return min;
}

int main(void){
    int evil1, evil2;
    
    printf("Enter a pair of integers (q to quit): \n");
    while (scanf("%d %d",&evil1,&evil2)==2){
        printf("The lesser of %d and %d is %d.\n",evil1,evil2,imin(evil1,evil2));
        printf("Enter a paor of integers (q to quit): \n");
    }
    printf("Bye.\n");
    
    return 0;
}
