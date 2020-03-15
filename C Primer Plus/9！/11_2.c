//
//  11_2.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/27.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
void chline(char ch,int i,int j){
    int k;
    for (k=1;k<i;k++) printf(" ");
    for (k=i;k<=j;k++) putchar(ch);
    putchar('\n');
}
int main(void){
    int i,j;
    char ch;
    scanf("%c %d %d",&ch,&i,&j);
    chline(ch,i,j);
}
