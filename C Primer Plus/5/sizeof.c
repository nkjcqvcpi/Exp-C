//
//  sizeof.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/12.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    int n = 0;
    size_t intsize;
    intsize = sizeof(int);
    printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n",n,sizeof n,intsize);
    return 0;
}
