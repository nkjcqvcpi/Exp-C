//
//  sum_arr1.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/30.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
#define SIZE 10
int sum (int ar[], int n){
    int i;
    int total =0;
    for(i=0;i<n;i++) total +=ar[i];
    printf("The size of ar is %zd bytes.\n",sizeof ar);
    return total;
}

int main(void){
    int marbles[SIZE] = {20,10,5,39,4,16,19,26,31,20};
    long answer;
    answer = sum(marbles,SIZE);
    printf("The total number of marbles is %ld.\n",answer);
    printf("The size of marble is %zd bytes.\n",sizeof marbles);
    return 0;
}
