#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int prod=1;
    for(int i=1;i<=N;i++){
        prod=prod*i;
        printf("n x i = %d\n", prod);
    }


    return 0;
}