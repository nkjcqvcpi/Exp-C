//
//  12_11.c
//  7
//
//  Created by Nkjcqvcpi on 2019/10/22.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    long n,i,j,k=0;
    scanf("%ld",&n);
    for(i=1;i<=n;i++){
        for (j=1;j<=i;j++)
            if (i%j==0) k++;
        if (k==2) printf("%ld ",i);
        k = 0;
    }
    printf("\n");
    return 0;
}
