#include <stdio.h>//yaad rkhna ki char mein ayega +-*/
int main(){
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(c){
        case '+':
        printf("%d",a+b);
        break;

        case '-':
        printf("%d",a-b);
        break;

        case '*':
        printf("%d",a*b);
        break;

        case '/':
        if(b!0=){
        printf("%d",a/b);}

        else printf("Invalid operation");
        break;

        default:
        printf("Invalid");
        break;
    }
    return 0;
}