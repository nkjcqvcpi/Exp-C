//
//  talkback.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/9/22.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define DENSITY 62.4
int main()
{
    float weight,volumes;
    int size,letters;
    char name[40];
    
    printf("Hi! What's your first name?\n");
    scanf("%s",name);
    printf("%s, what's your weight in pounds?\n",name);
    scanf("%f",&weight);
    size = sizeof name;
    letters = strlen(name);
    volumes = weight / DENSITY;
    printf("Well, %s, your volume is %2.2f cubic feet.\n",name,volumes);
    printf("Also, your first name has %d letters, \n",letters);
    printf("and we have %d bytes to store it in.\n",size);
    return 0;
}
