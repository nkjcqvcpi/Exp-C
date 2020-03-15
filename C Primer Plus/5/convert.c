//
//  convert.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/12.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    char ch;
    int i;
    float fl;
    
    fl = i = ch = 'A';
    printf("ch = %c, i = %d, fl = %2.2f\n",ch,i,fl);
    ch++;
    i = fl + 2 * ch;
    fl = 2.0 * ch + i;
    printf("ch = %c, i = %d, fl = %2.2f\n",ch,i,fl);
    ch = 5212205.07;
    printf("Now ch = %c\n",ch);
    return 0;
}
