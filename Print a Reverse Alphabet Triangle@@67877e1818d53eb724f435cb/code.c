#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int A=1;
        for(int k=1;k<=n+1-i;k++){
            printf("%c ",A);
            A++;
        }
        printf("\n");
    }
}