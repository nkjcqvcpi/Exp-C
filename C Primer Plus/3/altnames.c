//
//  altnames.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/9/20.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
#include <inttypes.h>
int main(void)
{
    int16_t me16;
    
    me16 = 4593;
    printf("First, assume int_16t is short: ");
    printf("me16 = %hd\n",me16);
    printf("Next, let's not make any assumptions.\n");
    printf("Instead, use a \"macro\" from inttypes.h: ");
    printf("me16 = %"PRId16"\n",me16);
    return 0;
}
