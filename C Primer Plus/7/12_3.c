//
//  12_3.c
//  7
//
//  Created by Nkjcqvcpi on 2019/10/22.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    int n[65536],i=0,e=0,o=0;
    double ae=0.0,ao=0.0;
    while(scanf("%d",&n[i]),n[i]!=0){
        if (n[i]%2==0) {
            e++;
            ae+=n[i];
        }
        else {
            o++;
            ao+=n[i];
        }
        i++;
    }
    ae /= e;
    ao /= o;
    printf("%d %lf %d %lf\n",e,ae,o,ao);
}
