//
//  10_5.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/10/26.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>

int main(void){
    int guess = 50, i = 1, h = 100, l = 0;
    char n;
    printf("Pick an integer from 1 to 100. I will try to guess it\n");
    printf("Respond with a y if my guess is right and with an h if it is higher and with an l it it is lower.\n");
    printf("Uh...is your number %d?\n",guess);
    while(i){
        scanf("%c",&n);
        if (n=='y') {
            printf("I knew I could do it!\n");
            i=0;
        }
        else if (n=='h'){
            h = guess;
            guess = (guess+l)/2;
            printf("Well, then is it %d?\n",guess);
        }
        else if (n=='l' && guess == 99) printf("Well, then is it 100?\n");
        else if (n=='l'){
            l = guess;
            guess = (guess+h)/2;
            printf("Well, then is it %d?\n",guess);
        }
        else printf("Respond with a y if my guess is right and with an h if it is higher and with an l it it is lower.\n");
    }
    return 0;
}

