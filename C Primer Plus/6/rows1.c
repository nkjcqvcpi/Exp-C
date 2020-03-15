//
//  rows1.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/17.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
#define ROWS 6
#define CHARS 10
int main(void){
    int row;
    char ch;
    
    for (row = 0; row < ROWS; row++){
        for (ch = 'A'; ch < ('A' + CHARS); ch++) printf("%c",ch);
        printf("\n");
    }
    return 0;
}
