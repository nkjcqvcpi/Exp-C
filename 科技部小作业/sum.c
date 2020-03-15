//
//  sum.c
//  科技部小作业
//
//  Created by Nkjcqvcpi on 2019/10/20.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    unsigned long i,j,n,s = 0,c;
    scanf("%ld",&n);
    for (i=1;i<=n;i++){
        c = 1;
        for (j=1;j<=i;j++) c *= j;
        s += c;
    }
    printf("%ld\n",s);
}
