//
//  8_6.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/9/28.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
#include <float.h>
int main(void){
    float f=1.0/3.0;
    double d=1.0/3.0;
    printf("%.4f\n",f);
    printf("%.12lf\n",d);
    printf("%.16lf\n",d);
    printf("%d %d\n",FLT_DIG,DBL_DIG);
    return 0;
}
