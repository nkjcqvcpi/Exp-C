//
//  chcount.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/22.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
#define PERIOD '.'
int main(void){
    int ch,charcount=0;
    while ((ch=getchar())!=PERIOD) if (ch!='"' && ch!='\'') charcount++;
    printf("There are %d non-quote characters.\n",charcount);
    return 0;
}
