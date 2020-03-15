#include <stdio.h>
int main(void){
    int i;
    for(i='a';i<='z';i++) printf("%c",i);
    for(i='A';i<='Z';i++) printf("%c",i);
    for(i=0;i<10;i++) printf("%d",i);
    printf("\n");
    return 0;
}
