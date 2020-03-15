//
//  12.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/18.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main(void){
    int i,t[8];
    for (i=1;i<=8;i++) t[i]=pow(2,i);
    i=1;
    do{
        printf("%d ",t[i]);
        i++;
    }while(i<=8);
    printf("\n");
    return 0;
}
