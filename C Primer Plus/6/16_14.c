//
//  16_14.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/20.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    char a[255];
    int i;
    scanf("%s",a);
    for (i=(int)strlen(a);i>=0;i--) printf("%c",a[i]);
    printf("\n");
    return 0;
}
