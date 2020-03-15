//
//  loccheck.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/27.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
void mikado (int bah){
    int pooh = 10;
    printf("In mikado(), pooh = %d and &pooh = %p\n",pooh, &pooh);
    printf("In mikado(), bah = %d and &bah = %p\n",bah, &bah);
}
int main(void){
    int pooh = 2, bah = 5;
    printf("In main(), pooh = %d and &pooh = %p\n",pooh, &pooh);
    printf("In main(), bah = %d and &bah = %p\n",bah, &bah);
    mikado(pooh);
    return 0;
}
