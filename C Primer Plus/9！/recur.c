//
//  recur.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/26.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
void up_and_down (int n){
    printf("Level %d: n location %p\n",n,&n);
    if (n<4) up_and_down(n+1);
    printf("Level %d: n location %p\n",n,&n);
}

int main(void){
    up_and_down(1);
    return 0;
}
