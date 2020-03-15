//
//  intconv.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/9/23.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void)
{
    float n1 = 3.0;
    double n2 = 3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;
    
    printf("%.1e %.1e %.1e %.1e\n",n1,n2,n3,n4);
    printf("%ld %ld\n",n3,n4);
    printf("%ld %ld %ld %ld\n",n1,n2,n3,n4);
    return 0;
}
