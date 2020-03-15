//
//  12_1.c
//  7
//
//  Created by Nkjcqvcpi on 2019/10/22.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
int main(void){
    char c;
    int s=0,n=0,o=0;
    while((c=getchar())!='#'){
        o++;
        if (isspace(c)) s++;
        if (c=='\n') n++;
    }
    printf("%d %d %d\n",s-n,n,o-s-n);
}
