//
//  10_8.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/26.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
char menu(void){
    char menu;
    printf("Enter the operation of your choice:\n"
            "a. add         s. subtract\n"
            "m. multiply    d. divide\n"
            "q. quit\n");
    scanf("%c",&menu);
    return menu;
}
double add(void){
    float f,s;
    printf("Enter the first number: ");
    while(scanf("%f",&f)!=1) printf("Please enter a number , such as 2.5, -1.78E8, or 3: ");
    printf("Enter the second number: ");
    while(scanf("%f",&s)!=1) printf("Please enter a number , such as 2.5, -1.78E8, or 3: ");
    
}
