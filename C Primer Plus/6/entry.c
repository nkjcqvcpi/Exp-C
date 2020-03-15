//
//  entry.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/17.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    const int secret_code = 13;
    int code_enterd;
    printf("To enter the triskaidekasphobia therapy club, \n");
    printf("please enter the secret code number: ");
    scanf("%d",&code_enterd);
    while (code_enterd != secret_code){
        printf("To enter the triskaidekaphobia therapy club, \n");
        printf("please enter the secret code number: ");
        scanf("%d",&code_enterd);
    }
    printf("Congratulations! You are cured!\n");
    
    return 0;
}
