//
//  12_2.c
//  7
//
//  Created by Nkjcqvcpi on 2019/10/22.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
int main(void){
    char c,s[65535];
    int i=1,j;
    while((c=getchar())!='#'){
        s[i] = c;
        i++;
    }
    for (j=1;j<=i;j++){
        printf("%c/%3d    ",s[j],s[j]);
        if (j%8==0)printf("\n");
    }
    printf("\n");
    return 0;
}
