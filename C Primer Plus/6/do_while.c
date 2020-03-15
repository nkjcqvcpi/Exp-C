//
//  do_while.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/17.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    const int secret_code = 13;
    int code_entered;
    
    do{
        printf("To enter the triskaidekaphobia therapy club, \n");
        printf("please enter secret code number: ");
        scanf("%d",&code_entered);
    } while (code_entered != secret_code);
    printf("Congratulations! You are cured!\n");
    return 0;
}
