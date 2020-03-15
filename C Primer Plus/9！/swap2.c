//
//  swap2.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/27.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
void interchange(int u, int v){
    int temp;
    printf("Originally x = %d and y = %d.\n",u,v);
    temp = u;
    u = v;
    v = temp;
    printf("Now x = %d and y = %d.\n",u,v);
}
int main(void){
    int x = 5, y =10;
    printf("Originally x = %d and y = %d.\n",x,y);
    interchange(x,y);
    printf("Now x = %d and y = %d.\n",x,y);
    return 0;
}
