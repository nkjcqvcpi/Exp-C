//
//  wordcnt.c
//  7
//
//  Created by Nkjcqvcpi on 2019/10/22.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '|'
int main(void){
    char c,prev;
    long n_chars = 0L;
    int n_lines = 0,n_words = 0,p_lines = 0;
    bool inword = false;
    
    printf("Enter text to be ananlyzed (| to terminate): \n");
    prev = '\n';
    while ((c=getchar())!=STOP){
        n_chars++;
        if(c=='\n') n_lines++;
        if(!isspace(c)&&!inword){
            inword = true;
            n_words++;
        }
        if(isspace(c)&&inword) inword = false;
        prev = c;
    }
    
    if (prev!='\n') p_lines=1;
    printf("characters = %ld,words = %d, lines = %d, ", n_chars, n_words, n_lines);
    printf("partial lines = %d\n",p_lines);
    return 0;
}
