//
//  8_5.c
//  C Primer Plus
//
//  Created by Nkjcqvcpi on 2019/9/27.
//  Copyright © 2019 Nkjcqvcpi. All rights reserved.
//

#include <stdio.h>
int main(void){
    char f[100],l[100];
    int i,lf,ll;
    
    printf("输入名字：");
    scanf("%s",f);
    printf("输入姓氏：");
    scanf("%s",l);
    
    printf("%s %s\n",f,l);
    
    lf = strlen(f);ll = strlen(l);
    for(i=1;i<lf;i++) printf(" ");
    printf("%d",lf);
    for(i=1;i<=ll;i++) printf(" ");
    printf("%d\n",ll);
    
    printf("%s %s\n",f,l);
    printf("%d",lf);
    for (i=1;i<=lf;i++) printf(" ");
    printf("%d\n",ll);
    return 0;
}
