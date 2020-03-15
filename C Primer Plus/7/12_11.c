//
//  12_11.c
//  7
//
//  Created by Nkjcqvcpi on 2019/10/23.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    double a = 0,b = 0,c = 0,t,m,r = 0,z,y;
    char i;
    
    while (1) {   //Ordering
        scanf("%c",&i);
        if (i == 'q') break;
        switch (i) {
            case 'a': scanf("%lf",&a);break;
            case 'b': scanf("%lf",&b);break;
            case 'c': scanf("%lf",&c);break;
            default : break;
        }
    }
    
    t = z = a * 1.25 + b * 0.65 + c * 0.89;
    m = a + b + c;
    if (t >= 100){
        r = t * 0.05;
        z = t * 0.95;
    }
    if (m <= 5){
        z = t + 3.5;
        y = 3.5;
    }
    else if (m > 5 && m < 20){
        z = t + 10;
        y = 10;
    }
    else {
        y = 8 + 0.1 * m;
        z = t + y;
    }
    printf("1.25 %4lf %4lf\n",a, a * 1.25);
    printf("0.65 %4lf %4lf\n",b, b * 0.65);
    printf("0.89 %4lf %4lf\n",c, c * 0.89);
    printf("%3lf %4lf %4lf %4lf\n",t,r,y,z);
    
}
