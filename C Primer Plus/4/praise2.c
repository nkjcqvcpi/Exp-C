//
//  praise2.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/9/22.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define PRAISE "What a super marvelous name! "
int main(void)
{
    char name[40];
    
    printf("What's your name?\n");
    scanf("%s",name);
    printf("Hello, %s. %s\n",name,PRAISE);
    printf("Your name of %d letters occupies %d memory cells.\n",strlen(name),sizeof name);
    printf("The phrase of praise has %d letters",strlen(PRAISE));
    printf("and occupies %d memory cells.\n",sizeof PRAISE);
    return 0;
}
