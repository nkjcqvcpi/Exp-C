//
//  12_5.c
//  7
//
//  Created by Nkjcqvcpi on 2019/10/22.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    int n,e=0,o=0;
    double ae=0.0,ao=0.0;
    while(scanf("%d",&n),n!=0){
        switch(n){
            case 1:o++;ao++;break;
            case 2:e++;ae+=2;break;
            case 3:o++;ao+=3;break;
            case 4:e++;ae+=4;break;
            case 5:o++;ao+=5;break;
            case 6:e++;ae+=6;break;
            case 7:o++;ao+=7;break;
            case 8:e++;ae+=8;break;
            case 9:o++;ao+=9;break;
        }
    }
    ae /= e;
    ao /= o;
    printf("%d %lf %d %lf\n",e,ae,o,ao);
}
