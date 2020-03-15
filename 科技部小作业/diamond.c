//
//  diamond.c
//  科技部小作业
//
//  Created by Nkjcqvcpi on 2019/10/24.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    int i,j,k,l,n;
    scanf("%d",&l);
    if (l%2==0) n = 1;
    else n = 2;
    for (i = 1;i <= l/2;i++){
        for (j = 1;j<=(l-2)/2-i+n;j++) printf(" ");
        for (k = 1;k<=2*i-1;k++) printf("*");
        printf("\n");
    }
    if (l%2!=0){
        for (i = 1;i<=l;i++) printf("*");
        printf("\n"); 
    }
    for (i = l/2;i >= 1;i--){
        for (j = 1;j<=(l-2)/2-i+n;j++) printf(" ");
        for (k = 1;k<=2*i-1;k++) printf("*");
        printf("\n");
    }
}
