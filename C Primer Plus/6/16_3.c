//
//  16_3.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/17.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    int i;
    char j;
    for (i=1;i<=6;i++){
        for (j='F';j>'F'-i;j--) printf("%c",j);
        printf("\n");
    }
    return 0;
}
