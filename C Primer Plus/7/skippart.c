//
//  skippart.c
//  7
//
//  Created by Nkjcqvcpi on 2019/10/22.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    const float MIN = 0.0f, MAX = 100.0f;
    float score,total = 0.0f,min = MAX,max = MIN;
    int n = 0;
    printf("Enter the first score(q to quit):");
    while (scanf("%f",&score)==1){
        if (score < MIN || score > MAX){
            printf("%0.1f is an invaild value. Try again: ",score);
            continue;
        }
        printf("Acccepting %0.1f: \n",score);
        min = (score < min)?score:min;
        max = (score > max)?score:max;
        total += score;
        n++;
        printf("Enter next score (q to quit):");
    }
    if (n>0){
        printf("Average of %d scores is %0.1f.\n",n,total/n);
        printf("Low=%0.1f,high=%0.1f\n",min,max);
    }
    else printf("No vaild scores were entered.\n");
    return 0;
}
