//
//  rows2.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/17.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    const int ROWS = 6;
    const int CHARS = 6;
    int row;
    char ch;
    
    for (row = 0; row < ROWS; row++){
        for (ch = ('A' + row);ch < ('A' + CHARS); ch++) printf("%c",ch);
        printf("\n");
    }
    return 0;
}
