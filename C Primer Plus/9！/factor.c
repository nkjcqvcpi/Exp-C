//
//  factor.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/26.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
long fact(int n){
    long ans;
    for (ans = 1;n > 1; n--) ans *= n;
    return 0;
}
long rfact(int n){
    long ans;
    
    if (n > 0) ans = n * rfact (n-1);
    else ans = 1;
    return ans;
}
int main (void){
    int num;
    
    printf("This program calculates factorials.\n");
    printf("Enter a value in the range 0-12(q to quit): \n");
    while (scanf("%d",&num)==1){
        if (num<0) printf("No negative numbers, please.\n");
        else if(num>12) printf("Keep input under 13.\n");
        else{
            printf("loop: %d factorial = %ld\n",num,rfact(num));
            printf("recursion: %d factorial = %ld\n",num,rfact(num));
        }
        printf("Enter a value in the range 0-12 (q to quit): \n");
    }
    printf("Bye.\n");
    return 0;
}
