//
//  cypher2.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/21.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
int main(void){
    char ch;
    
    while ((ch = getchar())!='\n'){
        if (isalpha(ch)) putchar(ch+1);
        else putchar(ch);
    }
    putchar(ch);
    return 0;
}
