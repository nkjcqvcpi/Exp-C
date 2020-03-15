//
//  showchar2.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/25.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
void display(char cr, int lines, int width){
    int row,col;
    
    for (row=1;row<=lines;row++){
        for (col=1;col<=width;col++) putchar(cr);
        putchar('\n');
    }
}

int main(void){
    int ch;
    int rows, cols;
    printf("Enter a character and two integers: \n");
    while((ch=getchar())!='\n'){
        if (scanf("%d %d",&rows,&cols)!=2) break;
        display(ch,rows,cols);
        while (getchar()!='\n') continue;
        printf("Enter another character and two integer; \n");
        printf("Enter a newline to quit.\n");
    }
    printf("Bye.\n");
    return 0;
}
