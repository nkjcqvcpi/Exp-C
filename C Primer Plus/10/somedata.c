//
//  somedata.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/30.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
#define SIZE 4
int main(void){
    int no_data[SIZE]={1492,1066};
    int i;
    
    printf("%2s%14s\n","i","no_data[i] ");
    for (i=0;i<SIZE;i++) printf("%2d%14d\n",i,no_data[i]);
    return 0;
}
