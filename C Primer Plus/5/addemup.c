//
//  addemup.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/12.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    int count, sum;
    
    count = 0;
    sum = 0;
    while (count++ < 20) sum = sum + count;
    printf("sum = %d\n",sum);
    return 0;
}
