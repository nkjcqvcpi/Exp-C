//
//  praise.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/9/22.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
#define PRAISE "What a super marvelous name!"
int main(void)
{
    char name[40];
    
    printf("What's your name?\n");
    scanf("%s",name);
    printf("Hello, %s. %s\n",name,PRAISE);
    return 0;
}
