//
//  when.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/17.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    int n = 5;
    while (n < 7){
        printf("n = %d\n",n);
        n++;
        printf("Now n = %d\n",n);
    }
    printf("The loop has finished.\n");
    return 0;
}
