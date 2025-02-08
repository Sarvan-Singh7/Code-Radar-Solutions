#include <stdio.h>//acha program hai ek baar dekho acche se because bina or operator ke not satisfied
int main(){
    int n;
    scanf("%d",&n);
    if(n>!0 || n>0){
        printf("False");
    }
    else{
        printf("True");
    }


    return 0;
}