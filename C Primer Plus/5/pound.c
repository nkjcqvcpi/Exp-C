//
//  pound.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/12.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
void pound(int n){
    while (n-- > 0) printf("#");
    printf("\n");
}
int main(void){
    int times = 5;
    char ch = '!';
    float f = 6.0;
    pound (times);
    pound (ch);
    pound ((int)f);
    return 0;
}
