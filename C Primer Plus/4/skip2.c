//
//  skip2.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/9/27.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    int n;
    printf("Please enter three integers: \n");
    scanf("%*d %*d %d",&n);
    printf("The last integer was %d\n",n);
    return 0;
}
