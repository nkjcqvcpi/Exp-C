//
//  10_2.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/25.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    int i=0,j=1,k=1;
    char a,b[255];
    while ((a=getchar())!=EOF){
        b[i]=a;
        i++;
    }
    printf("\n");
    while (j*(k-1)<=i){
        for (j=0;j<=10;j++) {if (j*k<=i) printf(" %c  ",b[j*k]);else break;}
        printf("\n");
        for (j=0;j<=10;j++) {if (j*k<=i) printf("%3d ",b[j*k]);else break;}
        printf("\n");
        k++;
    }
    return 0;
}
