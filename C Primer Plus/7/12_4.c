//
//  12_4.c
//  7
//
//  Created by Nkjcqvcpi on 2019/10/22.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    char i;
    int r=0;
    while((i=getchar())!='#'){
        if (i=='.' || i=='!') r++;
    }
    printf("%d\n",r);
}
