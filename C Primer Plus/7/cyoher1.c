//
//  cyoher1.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/21.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
#define SPACE ' '
int main(void){
    char ch;
    ch  = getchar();
    while (ch != '\n'){
        if (ch==SPACE) putchar(ch);
        else putchar(ch+1);
        ch = getchar();
    }
    putchar(ch);
    return 0;
}
