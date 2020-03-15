//
//  lethead2.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/26.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define NAME "GIGATHINK, INC. "
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '

void show_n_char (char ch, int num){
    int count;
    for  (count = 1;count <= num; count++) putchar (ch);
}

int main(void){
    int spaces;
    
    show_n_char('*',WIDTH);
    putchar('\n');
    show_n_char(SPACE,12);
    printf("%s\n", NAME);
    spaces = (WIDTH - strlen(PLACE))/2;
    
    show_n_char (SPACE,spaces);
    printf("%s\n", ADDRESS);
    show_n_char(SPACE,(WIDTH-strlen(PLACE))/2);
    
    printf("%s\n", PLACE);
    show_n_char('*',WIDTH);
    putchar('\n');
    
    return 0;
}
