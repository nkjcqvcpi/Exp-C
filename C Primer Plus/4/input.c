//
//  input.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/9/25.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    int age;
    float assets;
    char pet[30];
    
    printf("Enter your age, assets, and favourite pet.\n");
    scanf("%d %f",&age,&assets);
    scanf("%s",pet);
    printf("%d $%.2f %s\n", age, assets, pet);
    return 0;
}
