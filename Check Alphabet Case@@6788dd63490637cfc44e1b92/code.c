#include <stdio.h>
int main(){
    char a;
    scanf("%d",&a);
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