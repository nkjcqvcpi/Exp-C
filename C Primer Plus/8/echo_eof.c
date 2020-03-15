//
//  echo_eof.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/25.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    int ch;
    while((ch = getchar()) != EOF) putchar(ch);
    return 0;
}
