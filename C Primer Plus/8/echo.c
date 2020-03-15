//
//  echo.c
//  8
//
//  Created by Nkjcqvcpi on 2019/10/25.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    char ch;
    
    while((ch = getchar())!='#') putchar(ch);
    return 0;
}
