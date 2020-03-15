//
//  post_pre.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/12.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    int a = 1, b = 1;
    int aplus,plusb;
    
    aplus = a++;
    plusb = ++b;
    printf("a aplus b plusb \n");
    printf("%1d %3d %3d %3d\n",a,aplus,b,plusb);
    return 0;
}
