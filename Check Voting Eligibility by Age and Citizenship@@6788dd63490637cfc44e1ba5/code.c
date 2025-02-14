#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    if(n>=18 && m==1){
        printf("Eligible");
    }

    // else if(n<18 || )

    else printf("Not Eligible");
    return 0;
}