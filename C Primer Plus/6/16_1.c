//
//  16_6.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/17.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    char i,a[26];
    int j;
    for(i='a', j=0; i<='z', j<26;i++,j++) a[j]=i;
    for(j = 0; j < 26; j++) printf("%c ",a[j]);
    printf("\n");
    return 0;
}
