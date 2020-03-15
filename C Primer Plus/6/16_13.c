//
//  16_13.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/18.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    double a[8],b[8];
    int i;
    for (i=1;i<=8;i++) scanf("%lf",&a[i]);
    for (i=1;i<=8;i++) b[i]=b[i-1]+a[i];
    for (i=1;i<=8;i++) printf("%10lf ",a[i]);
    printf("\n");
    for (i=1;i<=8;i++) printf("%10lf ",b[i]);
    printf("\n");
    return 0;
}
