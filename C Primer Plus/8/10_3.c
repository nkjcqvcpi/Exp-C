//
//  10_3.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/25.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
int main(void){
    int l=0,u=0;
    char a;
    while((a=getchar())!=EOF){
        if (islower(a)==1) l++;
        else if(isupper(a)==1) u++;
    }
    printf("%d %d\n",u,l);
}
