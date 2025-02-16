#include <stdio.h>
int main(){
    char i;
    scanf("%c",&i);
    int a=(int)i;
    if(a<=90 && a>=65){
        printf("Uppercase");
    }
    else if(a>=97 && a<=122){
        printf("Lowercase");
    }
    else {
        printf("Not an alphabet");
    }
    return 0;
}