//
//  proto.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/26.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int imax(int,int);
int main(void){
    printf("The maximum of %d and %d is %d.\n",3,5,imax(3));
    printf("The maximun of %d and %d is %d.\n",3,5,imax(3.0,5.0));
    return 0;
}
int imax(int n,int m)
{
    int max;
    if (n>m) max = n;
        else max = m;
            return max;
}
