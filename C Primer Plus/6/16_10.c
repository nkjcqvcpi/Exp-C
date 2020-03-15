//
//  16_10.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/18.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    long n[7];
    int i;
    for (i=0;i<=7;i++) scanf("%ld",&n[i]);
    for (i=7;i>=0;i--) printf("%ld ",n[i]);
    printf("\n");
    return 0;
}
