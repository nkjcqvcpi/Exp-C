//
//  10_4.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/26.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
int main(void){
    char a;
    int i=0,j=1,n[255];
    double t=0;
    while((a=getchar())!=EOF){
        if (isalpha(a)) i++;
        else if(isspace(a)) {
            n[j]=i;
            i=0;
            j++;
        }
    }
    n[j]=i;
    printf("\n");
    for (i=1;i<=j;i++) t +=n[i];
    t /= (j);
    printf("%lf\n",t);
}
