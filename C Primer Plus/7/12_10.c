//
//  12_10.c
//  7
//
//  Created by Nkjcqvcpi on 2019/10/23.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    char x;
    double i;
    while(1){
        printf("a.单身 b.户主 c.已婚，共有 d.已婚，离异\n");
        scanf("%c",&x);
        //x = getchar();
        switch(x){
            case 'a':
                scanf("%lf",&i);
                if (i<=17850) printf("%lf\n",i * 0.15);
                else printf("%lf\n", (i - 17850) * 0.28 + 17850 * 0.15);
                break;
            case 'b':
                scanf("%lf",&i);
                if (i<=23900) printf("%lf\n",i * 0.15);
                else printf("%lf\n", (i - 23900) * 0.28 + 23900 * 0.15);
                break;
            case 'c':
                scanf("%lf",&i);
                if (i<=29750) printf("%lf\n",i * 0.15);
                else printf("%lf\n", (i - 29750) * 0.28 + 29750 * 0.15);
                break;
            case 'd':
                scanf("%lf",&i);
                if (i<=14875) printf("%lf\n",i * 0.15);
                else printf("%lf\n", (i - 14875) * 0.28 + 14875 * 0.15);
                break;
            default: break;
        }
        getchar();
    }
}
