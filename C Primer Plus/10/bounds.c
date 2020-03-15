//
//  bounds.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/30.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
#define SIZE 4
int main(void){
    int value1 = 44,arr[SIZE],value2 = 88,i;
    printf("value1 = %d,value2 = %d\n",value1,value2);
    for(i=-1;i<=SIZE;i++) arr[i] = 2*i+1;
    for(i = -1;i<7;i++) printf("%2d %d\n",i,arr[1]);
    printf("value1 = %d, value2 = %d\n",value1,value2);
    return 0;
}
