//
//  truth.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/17.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    int n = 3;
    
    while(n) printf("%2d is true\n",n--);
    printf("%2d is false\n",n);
    n = -3;
    while(n) printf("%2d is true\n",n++);
    printf("%2d is false\n",n);
    return 0;
}
