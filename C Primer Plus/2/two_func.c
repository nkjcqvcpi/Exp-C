//
//  two_func.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/9/19.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>

void butler(void);
int main(void)
{
    printf("I will summon the bulter function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable CD-ROMS.\n");
    return 0;
}

void butler(void)
{
    printf("You rang, Sir?\n");
}
