//
//  break.c
//  7
//
//  Created by Nkjcqvcpi on 2019/10/22.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    float length,width;
    printf("Enter the length of the rectangle: \n");
    while (scanf("%f",&length)==1){
        printf("Length = %0.2f: \n",length);
        printf("Enter its width: \n");
        if(scanf("%f",&width)!=1) break;
        printf("Width = %0.2f: \n",width);
        printf("Area = %0.2f: \n",length*width);
        printf("Enter the length of the rectangle: \n");
    }
    printf("Done.\n");
    return 0;
}
