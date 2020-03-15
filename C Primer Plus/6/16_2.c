//
//  16_2.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/17.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    int i,j;
    for (i=1;i<=5;i++){
        for (j=1;j<=i;j++) printf("$");
        printf("\n");
    }
}
