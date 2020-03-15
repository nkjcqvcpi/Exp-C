//
//  10_6.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/26.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
char get_first(void){
    int ch;
    while(isspace(ch = getchar())) continue;
    return ch;
}
int main(void){
    printf("%c\n",get_first());
    return 0;
}

