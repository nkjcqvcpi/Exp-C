//
//  16_6.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/18.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    char w[256];
    int i;
    scanf("%s",w);
    for (i = strlen(w);i>=0;i--) printf("%c",w[i]);
    printf("\n");
}
