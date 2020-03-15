//
//  lethead.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/26.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
#define NAME "GIGATHINK, INC. "
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

void starbar (void){
    int count;
    for  (count = 1;count <= WIDTH; count++) putchar ('*');
    putchar('\n');
}

int main(void){
    starbar();
    printf("%s\n", NAME);
    printf("%s\n", ADDRESS);
    printf("%s\n", PLACE);
    starbar();
    return 0;
}
