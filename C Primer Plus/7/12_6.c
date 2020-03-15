//
//  12_6.c
//  7
//
//  Created by Nkjcqvcpi on 2019/10/24.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    char i,j=0;
    int t=0;
    while((i = getchar())!='#'){
        if (j == 'e' && i == 'i') t++;
        j = i;
    }
    printf("%d\n",t);
}
